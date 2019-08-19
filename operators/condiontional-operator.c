#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter numbers: \n");
    scanf("%d%d", &a, &b);

    // conditional operator shorthand for if(){}
    (a > b) ? printf("%d is greater than %d\n", a, b) : printf("%d is greater than %d\n", b, a);

    return 0;
}