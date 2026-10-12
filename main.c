#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with current time
    srand(time(NULL));

    // Generate random number between 1 and 100
    int randomNum = rand() % 100 + 1;
    int no_of_guesses=0;
    int guessed;

    // printf("Random number between 1 and 100: %d\n", randomNum);
    do
    {
        printf("Guess the number");
        scanf("%d",&guessed);
        if(guessed>randomNum){
            printf("Lower number please!\n");

        }
        else{
            printf("Higher number pleasse!\n");
        }
        no_of_guesses++;
    } while (guessed!=randomNum);
    
    printf("You guessed the number in %d guesses",no_of_guesses);

    return 0;
}


   