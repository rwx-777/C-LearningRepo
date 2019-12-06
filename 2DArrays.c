#include <stdio.h>
#include <stdlib.h>

int main() {

    int nums[3][2] = { 
        {1, 2}, {76, 69}, {42, 89}
        };

    printf("%d", nums[0][0]); //will print out 1
    printf("%d", nums[1][0]); //will print out 76

      //Lets use nested For Loops yeet
    int x,y;
    for(x=0; x < 3; x++){
        for(y=0; y < 2; y++){
            printf("%d", nums[x][y]);
        }
        printf("\n");
    }

    return 0;
}