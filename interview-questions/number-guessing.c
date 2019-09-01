#include <stdio.h>

// functions prototype
void guessNumber();
void guessNumber2();

// main entry function
int main()
{
    // guessNumber();
    guessNumber2();
    return 0;
}

void guessNumber()
{
    int guess, guessCount = 0, guessLimit = 3, secretNumber = 9;

    while (guess != secretNumber)
    {
        printf("Guess a number: ");
        scanf("%d", &guess);
        guessCount += 1;
        if (guessCount == guessLimit && guess != secretNumber)
        {
            printf("Only 3 guesses allowed\n");
            break;
        }
    }
    if (guess == secretNumber)
    {
        printf("Hurray!, You are right\n");
    }
    else
    {
        printf("You lost. Try again later");
    }
}

void guessNumber2()
{
    int guess, guessCount = 0, guessLimit = 3, secretNumber = 9, outOfGuesses = 0;
    while (guess != secretNumber && outOfGuesses != 1)
        if (guessCount < guessLimit)
        {
            printf("Guess a number: ");
            scanf("%d", &guess);
            guessCount += 1;
        }
        else
        {
            outOfGuesses = 1;
        }

    if (outOfGuesses)
    {
        printf("You lose. Try again later.\n");
    }
    else
    {
        printf("Congrats! You won.\n");
    }
}
