#include <stdio.h>
#include <stdlib.h>

//compares two numbers and stores the largest one
int max(int num1, int num2){
    int result;
    if (num1 > num2){
        result = num1;
    }else {
        result = num2;
    }
    return result;
}

int main() {

    printf("%d", max(4,10)); //prints out result

    return 0;
}