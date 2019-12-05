#include <stdio.h>
#include <stdlib.h>

int main() {

    int age;
    printf("Enter your age: ");
    scanf("%d", &age); //will accept an integer and will store it in the var age
    printf("You are %d years old\n", age);

    //Lets try it again this time with a different data type
    double gpa;
    printf("Enter your gpa: ");
    scanf("%lf", &gpa);  // lf stands for double
    printf("Your gpa is %f\n", gpa);
    
    //Lets get your grade
    char grade;
    printf("Enter your grade: ");
    scanf("%c", &grade);
    printf("Your grade is %c", grade);
    
    //Lets get a string from the user
    char name[20]; //will be able to store 20 characters
    printf("Enter your name: ");
    scanf("%s", name); //this will not get stuff with spaces
    printf("Your name is %s", name);

    //Lets get input line of text 
    char name2[20];
    printf("Enter your full name: ");
    fgets(name, 20, stdin);
    printf("Your name is %s", name2);
    

    return 0;
}