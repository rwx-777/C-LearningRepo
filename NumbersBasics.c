#include <stdio.h>
#include <stdlib.h>

int main() {

    printf("%f",8,9); //prints out it to a large decimal

    //Basic Math yay...
    printf("%f", 5.0 + 4.3);
    printf("%f", 7.3-5.2);
    printf("%f", 5.0 / 4.5);
    printf("%f", 5.0 * 4.5);

    //What happens if we use a integer and a decimal
    printf("%f", 5 + 4.5); //Will get converted to decimal

    int num = 6;
    printf("%d", num);

    //Math functions in C
    printf("%f", pow(2, 3) ); //does 2 to the power of 3 it will be decimal
    printf("%f", sqrt(36) ); //returns the square root of 36

    printf("%f", ceil(36.365)); //will round it up
    printf("%f", floor(36.656)); //will round it down no mater what


    return 0;
}