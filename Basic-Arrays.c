#include <stdio.h>
#include <stdlib.h>

int main() {

    int luckyNumbers[] = {4, 18, 22, 42, 81};
    printf("%d", luckyNumbers[0]); //will print out 4
    printf("%d", luckyNumbers[2]); //will print out 22

    //Lets change a number
    printf("%d", luckyNumbers[1]);
    luckyNumbers[1] = 32;
    printf("%d", luckyNumbers[1]);

    //Lets make a new array and give it a fixed size
    int Items_in_Shop[10];
    Items_in_Shop[1] = 80;
    printf("%d",Items_in_Shop[1]);

    //Even a "String" is an Array of characters
    char phrase[20] = "Array";
    printf("%s", phrase);

    return 0;
}