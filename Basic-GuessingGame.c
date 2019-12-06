#include <stdio.h>
#include <stdlib.h>

int main() {

    int secretNumber = 7;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;

    while (secretNumber != guess) {
        if(guessCount < guessLimit){
        printf("Guess a number: ");
        scanf("%d", &guess);
        guessCount++;
        }else {
            printf("You are out of guesses\n");
            break;
        }
    }

    if (secretNumber == guess) {
        printf("You win!\n");
    }
    


    
    
    


    return 0;
}