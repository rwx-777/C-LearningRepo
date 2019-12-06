#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE *fpointer = fopen("Hello.txt", "w"); //w = write | a = append
    //fpointer will be pointing to the memory address of our file

    fprintf(fpointer, "Hello there my friend"); //overrides old file

    fclose(fpointer);

    return 0;
}