#include <stdio.h>
#include <stdlib.h>

struct Student{
    char name[50];
    char major[50];
    int age;
    double gpa;
};


int main() {
    
    struct Student student1;
    student1.age = 22;
    student1.gpa = 3.2;
    strcpy(student1.name, "Timmy");
    strcpy(student1.major, "Business");

    printf("%f", student1.gpa);
    printf("%s", student1.name);


    struct Student student2;
    student2.age = 27;
    student2.gpa = 2.2;
    strcpy(student2.name, "Jace");
    strcpy(student2.major, "Mixed Martial Arts");

    printf("%f", student2.gpa);
    printf("%s", student2.name);



    return 0;
}