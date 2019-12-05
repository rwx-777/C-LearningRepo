#include <stdio.h>
#include <stdlib.h>

int main() {

    //Varible to store lots of characters 
    char characterName[] = "Elliot";

    //Integer stores numbers
    int characterAge = 27;

    printf("There was once a dude named %s\n", characterName); //%s is for strings
    
    characterAge = 30; //We can change a value of a varible half way through the code cool !

    printf("he was %d years old\n", characterAge); //%d stands for integers

    return 0;
}