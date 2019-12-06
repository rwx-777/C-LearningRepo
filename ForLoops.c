#include <stdio.h>
#include <stdlib.h>

int main() {

    //Basic For Loop
    for(int i = 1; i <= 5; i++) {
        printf("%d\n", i);
    }
    printf("Finished with first Loop\n");

    //For Loops with Arrays
    int luckyNumbers[] = {4,8,12,16,32,46};

    //to get the length of an Array we use (sizeof(Array)/sizeof(*Array))
    int j;
    for(j=0;j < (sizeof(luckyNumbers)/sizeof(*luckyNumbers)); j++){
        printf("%d\n", luckyNumbers[j]);
    }

    return 0;
}