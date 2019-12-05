#include <stdio.h>

int main(void) {
    int x=0;
    int y, z;

    while (x <= 255) {
        //x = 0;
        y = 1;
        do{
            printf("%d\n", x);

            z = x + y;
            x = y;
            y = z;
        } while (x < 255);
    }
    
}