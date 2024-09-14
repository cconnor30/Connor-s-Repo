#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int randomnumber;
    int guess;
    
    srand(time(NULL));
    randomnumber = (rand() % 10) + 1;
    
    for (int i = 0; i < 3; i++) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
      
        if (randomnumber == guess) {
            printf("Congratulations! You guessed the number.");
            break;
       } else if (randomnumber > guess) {
            printf("Too low! Try again.\n");
        } else {
            printf("Too high! Try again.\n");
        }
    }
    if (randomnumber != guess) {
        printf("Sorry, you've used all your attempts. The number was %d.", randomnumber);
    }

    return 0;
}