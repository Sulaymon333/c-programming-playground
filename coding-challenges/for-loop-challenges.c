#include <stdio.h>

// Multiplication table
void multiplicationTable()
{
    int i, n, product, temp;
    printf("What number to generate multiplication table for: ");
    scanf("%d", &n);
    if (n > 12)
        temp = n - n % 12;
    else if (n < 12)
        temp = n + (12 - n);
    else
        temp = n;

    for (i = 1; i <= temp; i++)
    {
        product = n * i;
        printf("%d X %d = %d\n", n, i, product);
    }
}

// Sum of given n numbers
void sumNumbers()
{
    int n, newEntered, i, sum = 0;
    printf("Please enter how many numbers to sum up: ");
    scanf("%d", &n);
    printf("Numbers entering ....\n");
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &newEntered);
        sum = sum + newEntered;
    }
    printf("The sum of the given  numbers is... %d\n", sum);
}

int main()
{
    // multiplicationTable();
    sumNumbers();
    return 0;
}