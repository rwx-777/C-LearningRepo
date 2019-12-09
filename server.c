/* A simple server in the internet domain using TCP
   The port number is passed as an argument */

   //usage: ./server <port>
#include <stdio.h>
#include <sys/types.h> 
#include <sys/socket.h>
#include <netinet/in.h>


//Function that will get called when syscall failed
void error(char *msg)
{
    perror(msg);
    exit(1);
}

int main(int argc, char *argv[])
{
     int sockfd, newsockfd, portno, clilen;

    //the server reads characters from the socket connection into this buffer
     char buffer[256]; //will only be able to read 256 characters in

     struct sockaddr_in serv_addr, cli_addr;

     int n;

    //server will display error message if user does not provide port number
     if (argc < 2) {
         fprintf(stderr,"ERROR, no port number provided\n");
         printf("Usage: ./server <portnumber>\n");
         exit(1);
     }

    //Creates new socket
     sockfd = socket(AF_INET, SOCK_STREAM, 0);  //Stream & 0 --> TCP

     if (sockfd < 0) //if socket call fails it returns -1
        error("ERROR opening socket");

    //bzero sets all values in a buffer to zero
     bzero((char *) &serv_addr, sizeof(serv_addr)); //&serv_addr = pointer to buffer, size of buffer

    //converts the port number from a string to an integer
     portno = atoi(argv[1]);

    //Just because
     serv_addr.sin_family = AF_INET;

    //gets address of the current machine
     serv_addr.sin_addr.s_addr = INADDR_ANY;

     //here we need to convert the port number from host byte order into a network byte order
     serv_addr.sin_port = htons(portno);

    //binds a socket to the address of the current host 
     if (bind(sockfd, (struct sockaddr *) &serv_addr,
              sizeof(serv_addr)) < 0) 
              error("ERROR on binding");

    //5 is the max number of connecntions that can be waiting
     listen(sockfd,5);

    //everything starting here should be in an infinite loop 

    //accepts all connections 
     clilen = sizeof(cli_addr);
     newsockfd = accept(sockfd, (struct sockaddr *) &cli_addr, &clilen);
     if (newsockfd < 0) 
          error("ERROR on accept");
    //after a connection is established we should call fork() to create a new process

    //We would only get here if everything else has been successful so we are assuming that the client is successfully connected.
     bzero(buffer,256);
     n = read(newsockfd,buffer,255);
     if (n < 0) error("ERROR reading from socket");
     printf("Here is the message: %s\n",buffer);

     n = write(newsockfd,"I got your message",18); //18 is size it gets back
     if (n < 0) error("ERROR writing to socket");

     return 0; 
}
