#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if(argc < 3 || argc > 3){
        printf("Usage: ./CommandLineArgs.c Firstname SecondName\n");
    }else {
        printf("Hello, %s %s\n", argv[1], argv[2]);
    }
    return 0;
}