#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main() {

    int filedescriptor;

    filedescriptor = open("testfile.txt", O_WRONLY | O_CREAT, S_IRWXU);

    if(filedescriptor < 0){
        printf("The open operation failed...");
        return -1; //if open returns -1 it indicates an error
    }else{
        printf("The open operation succeeded!");
        return 0; //0 means success
    }

    return 0;
}