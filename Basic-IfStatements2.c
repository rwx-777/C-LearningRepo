#include <stdio.h>
#include <stdlib.h>

//compares two numbers and stores the largest one
int max(int num1, int num2, int num3){
    int result;
    //&& stands for and
    // || stands for or 
    if(num1 >= num2 && num1 >= num3) {
        result = num1;
    }else if(num2 >= num1 && num2 >= num3) {
        result = num2;
    }else{
        result = num3;
    }


    return result;
}

int main() {

    printf("%d\n", max(4,10,22)); //prints out result
    return 0;
}