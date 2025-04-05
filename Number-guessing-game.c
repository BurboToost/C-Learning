#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    const int MIN = 1;
    const int MAX = 100;
    int guess;
    int guesses = 0;
    int answer;

    // uses the current time as a seed
    srand(time(0));

    // generate a random number between min and max
    answer = rand() % MAX + MIN;

    do{
        printf("Enter a guess : ");
        scanf("%d", &guess);
        if(guess > answer)
        {
            printf("Too high!\n");
        }
        else if(guess < answer)
        {
            printf("Too low!\n");
        }
        else{
            printf("CORRECT ANSWER!\n");
        }
        guesses++;
    }while(guess != answer);

    printf("**************************\n");
    printf("answer: %d\n", answer);
    printf("guesses: %d\n", guesses);
    printf("**************************");

    return 0;
}