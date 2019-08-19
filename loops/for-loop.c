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

int main()
{
    forLoop();
    return 0;
}