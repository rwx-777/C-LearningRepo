#include <stdio.h>
#include <stdlib.h>

int main() {
    //Pointers are Datatypes they are just memory addresses.

    //integer variable
    int age = 30;

    //pointer variable
    int *pAge = &age;

    printf("%p\n", pAge);

    //Derefrencing a pointer
    printf("%d\n", *pAge);


    return 0;
}