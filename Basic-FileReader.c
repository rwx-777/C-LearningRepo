#include <stdio.h>
#include <stdlib.h>

int main() {

    char line[255];
    FILE *fpointer = fopen("Hello.txt", "r");

    fgets(line,255,fpointer); //reads first line of file and stores it in line
    fgets(line,255,fpointer);

    printf("%s", line);

    fclose(fpointer);

    return 0;
}