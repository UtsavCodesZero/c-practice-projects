#include <stdio.h> /*Ask ChatGPT to explain if code bujheyna bhaney*/
#include <stdlib.h>
#include <time.h>

int main()
{
    // Seed the random number generator using current time
    srand(time(0));
    int n, guessCount = 0;

    // Generate random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;

    printf("A secret number between 1 and 100 has been generated!\n");

    do
    {
        printf("Guess the number: ");
        scanf("%d", &n);
        guessCount++;
        if (n > randomNumber)
        {
            printf("Lower number please.\n");
        }
        else if (n < randomNumber)
        {
            printf("Higher number please.\n");
        }
        else
        {
            printf("Correct answer in %d guesses.\n", guessCount);
            break;
        }

    } while (n);

    return 0;
}
