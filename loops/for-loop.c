#include <stdio.h>

void forLoop()
{
    int i, n;
    printf("Enter any number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%d\n", i);
    }
}

void reverseForLoop()
{
    int i, n;
    printf("Enter any number: ");
    scanf("%d", &n);
    for (i = n; i >= 1; i--)
    {
        printf("%d\n", i);
    }
}

int main()
{
    // forLoop();
    reverseForLoop();
    return 0;
}