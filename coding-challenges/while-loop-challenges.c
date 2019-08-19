#include <stdio.h>

// Even-numbers/ First n-even-numbers
void EvenNumbers()
{
    int i = 1, n;
    printf("Print first N even numbers. (e.g for 5: 2, 4): ");
    scanf("%d", &n);

    while (i <= n)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
        i += 1;
    }
}

// First n-even numbers method 2
void firstNEven()
{
    int i = 2, n;
    printf("Print first N even numbers. (e.g for 5: 2, 4): ");
    scanf("%d", &n);

    while (i <= n)
    {
        printf("%d\n", i);
        i += 2;
    }
}

// First n-odd numbers method
void firstNOdd()
{
    int i = 1, n;
    printf("Print first N odd numbers. (e.g for 5: 1, 3): ");
    scanf("%d", &n);

    while (i < n)
    {
        if (i % 2 != 0)
        {
            printf("%d\n", i);
        }
        i += 1;
    }
}

// First n-odd numbers method 2
void firstNOdd2()
{
    int i = 1, n;
    printf("Print first N odd numbers. (e.g for 5: 1, 3): ");
    scanf("%d", &n);

    while (i < n)
    {
        printf("%d\n", i);
        i += 2;
    }
}

void reverseNumber()
{
    int rem, n;
    printf("Print number in reverse order. (e.g for 543, is 345): ");
    scanf("%d", &n);
    while (n > 0)
    {
        rem = n % 10;
        printf("%d", rem);
        n = n / 10;
    }
    printf("\nend\n");
}

// Sum of a number
void sumNumber()
{
    int rem, total, n;
    printf("Find sum of digits of number. (e.g for 543, is 12): ");
    scanf("%d", &n);
    while (n > 0)
    {
        rem = n % 10;
        total += rem;
        // printf("%d", rem);
        n = n / 10;
    }
    printf("Sum of digits of the number supplied is: %d\n", total);
}

// Armstrong number checker
void armstrongNumber()
{
    int temp, n, rem, total = 0;
    printf("Enter any number to check if Armstrong number. (e.g 153 is an Armstrong number): ");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        rem = n % 10;
        total = total + rem * rem * rem;
        n = n / 10;
    }
    if (temp == total)
        printf("The number %d supplied is an Armstrong number\n", temp);
    else
        printf("The number %d supplied is NOT an Armstrong number\n", temp);
}

int main()
{
    // ascending();
    // descending();
    // EvenNumbers();
    // firstNEven();
    // firstNOdd();
    // firstNOdd2();
    // reverseNumber();
    // sumNumber();
    armstrongNumber();

    return 0;
}