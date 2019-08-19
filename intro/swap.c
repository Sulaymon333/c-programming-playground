#include <stdio.h>

int main()
{
    int a, b, placeholder;

    printf("Hello world\n");

    printf("Enter the first numbers: ");
    scanf("%d", &a);
    printf("Enter the second numbers: ");
    scanf("%d", &b);

    printf("The values of \"a\" and \"b\" before swapping respectively are %d, %d\n", a, b);
    placeholder = a;
    a = b;
    b = placeholder;
    printf("The values of \"a\" and \"b\" after swapping respectively are %d, %d\n", a, b);
    return 0;
}