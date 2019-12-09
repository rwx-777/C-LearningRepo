//2019 C-learning Repo
//Diffrent kind of file writer

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main() {

    int filedescriptor;

    filedescriptor = open("testfile.txt", O_WRONLY | O_CREAT, S_IRWXU); //Creates a file if it doesnt exit
    //only gives it write permissions (700) 

    if(filedescriptor < 0){
        printf("The open operation failed...\n");
        return -1; //if open returns -1 it indicates an error
    }else{
        printf("The open operation succeeded!\n");
        return 0; //0 means success
    }

    int writereturn;
    
    writereturn = write(filedescriptor, "Writing test data to the file", 30); //30 indicates the byte size of what we want to wriet to file

    if(writereturn != 30){
        printf("The write operation failed...");
        return -1;
    }else{
        printf("The write operation succeeded!");
    }

    
    return 0;
}