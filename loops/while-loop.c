#include <stdio.h>

// Ascending order
void ascending()
{
    int i = 1, n;
    printf("Print numbers up to 4 in ascending order. (e.g 1, 2, 3, 4): ");
    scanf("%d", &n);
    while (i <= n)
    {
        printf("%d\n", i);
        i += 1;
    }
}

// Descending order
void descending()
{
    int i = 1, n;
    printf("Print numbers up to 5 in descending order. (e.g 5, 4, 3, 2, 1): ");
    scanf("%d", &n);

    do
    {
        printf("%d\n", n);
        n -= 1;
    } while (n >= i);
}

int main()
{
    // ascending();
    descending();
    return 0;
}