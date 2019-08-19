#include <stdio.h>

void evenOdd()
{
    int a;
    printf("Enter any number: ");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("%d is an even number\n", a);
    }
    else
    {
        printf("%d is an odd number\n", a);
    }
}

int main()
{
    evenOdd();
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    if (a > b)

        printf("%d is greater than %d\n", a, b);

    else if (a == b)
        printf("%d is equal to %d\n", a, b);

    else
        printf("%d is greater than %d\n", b, a);

    return 0;
}