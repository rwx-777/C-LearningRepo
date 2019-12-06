#include <stdio.h>
#include <stdlib.h>


void SayHello() {
    printf("Hello User1\n");
}


void HelloTo(char name[]) {
    printf("Hello %s\n", name);
}

//Here we just reference the function but its actually declared in line 32
void HelloTo_extra();

int main() {

    printf("Calling function\n");

    SayHello();
    HelloTo("Elliot");
    HelloTo("Darleen");
    HelloTo("Angela");

    HelloTo_extra("Elliot",27);

    printf("Finished\n");
    return 0;
}

void HelloTo_extra(char name[], int age) {
    printf("Hello %s, you are %d\n", name, age );
}
