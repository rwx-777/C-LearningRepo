#include <stdio.h>
#include <stdlib.h>

int main() {

    char grade;

    printf("Enter your grade: ");
    scanf("%s", &grade); 

    switch(grade){
    case 'A' :
        printf("You are investing too much time into school.\n");
        break;
    case 'B' :
        printf("You are getting better...\n");
        break;
    case 'C' :
        printf("Alright ! Perfect score\n");
        break;
    case 'D' :
        printf("Its fine\n");
        break;
    case 'E' :
        printf("Dont break a sweat\n");
        break;
    case 'F' :
        printf("Who cares about grades anyway?\n");
        break;
    default :
        printf("We dont need no education...\n");
    }


    return 0;
}

