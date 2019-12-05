#include <stdio.h>
#include <stdlib.h>

int main() {

    int num1;
    int num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    int result = num1 + num2;

    printf("Answer: %d\n", result);

    return 0;
}