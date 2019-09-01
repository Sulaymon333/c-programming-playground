#include <stdio.h>

void square()
{
    int i, j, n;
    printf("Enter the number of sides: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void triangleLeft()
{
    int i, j, n;
    printf("Enter the height of the triangle: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void triangleRight()
{
    int i, j, k, n;
    printf("Enter the height of the triangle: ");
    scanf("%d", &n);
    for (i = n; i >= 1; i--)
    {
        for (k = 1; k < i; k++)
        {
            printf(" ");
        }
        for (j = i; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void triangleRight2()
{
    int i, j, k, n;
    printf("Enter the height of the triangle: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (k = i; k < n; k++)
        // for(k=i; k<=(n-1); k++)
        {
            printf(" ");
        }

        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void triangleInvertedLeft()
{
    int i, j, n;
    printf("Enter the height of the triangle: ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--)
    {
        for (j = i; j >= 1; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}

void triangleInvertedRight()
{
    int i, j, k, n;
    printf("Enter the height of the triangle: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (k = 1; k < i; k++)
        {
            printf(" ");
        }
        for (j = i; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void isoscelesTriangle()
{
    // pattern
    // 1-4  * 1-4
    // 1-3 *** 1-3
    int i, j, k, n;
    printf("Enter the height of the triangle: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (k = i; k < n; k++)
        {
            printf(" ");
        }
        for (j = 1; j <= i + (i - 1); j++)
        {
            printf("*");
        }

        // Not relevant in this case
        // for (k = i; k < n; k++)
        // {
        //     printf(" ");
        // }
        printf("\n");
    }
}

void isoscelesTriangle2()
{
    int i, j, k, n;
    printf("Enter the height of the triangle: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (k = i; k < n; k++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        for (j = 2; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void isoscelesTriangleInverted()
{
    int i, j, k, n;
    printf("Enter the height of the triangle: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (k = 1; k < n; k++)
        {
            printf(" ");
        }
        for (j = i; j <= n; j++)
        {
            printf("*");
        }
        for (j = i + 1; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void isoscelesTriangleInverted2()
{
    int i, j, k, n;
    printf("Enter the height of the triangle: ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--)
    {
        for (k = i; k < n; k++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        for (j = 2; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void diamondShape()
{
    int i, j, k, n;
    printf("Enter the height of the triangle: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (k = i; k <= n - 1; k++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        for (j = 2; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (i = n; i >= 1; i--)
    {
        for (k = i; k <= n - 1; k++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        for (j = 2; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void numLeftTriangle()
{
    int i, j, n;
    printf("Please enter the height of the triangle: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}

void numLeftTriangleRepeat()
{
    int i, j, n;
    printf("Please enter the height of the triangle: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
}

void isoscelesAlphabet()
{
    int i, j, k, n;
    printf("Please enter the height of the triangle: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (k = i; k < n; k++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%c", 64 + i);
        }
        for (j = 2; j <= i; j++)
        {
            printf("%c", 64 + i);
        }
        printf("\n");
    }
}

void numberIncreaseEndWithOne()
{
    int i, j, n;
    printf("Please enter the height of the triangle: ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }

        printf("1\n"); // print ending with 1

        // Alternatively
        // for (j = 1; j <= 1; j++)
        // {
        //     printf("%d", j);
        // }
    }
}

void numberIncreaseEndWithOne2()
{
    int i, j, n;
    printf("Please enter the height of the triangle: ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }

        printf("1\n");
    }
}
int main()
{
    // square();
    // triangleLeft();
    // triangleRight();
    // triangleRight2();
    // triangleInvertedLeft();
    // triangleInvertedRight();
    // isoscelesTriangle();
    // isoscelesTriangle2();
    // isoscelesTriangleInverted();
    // isoscelesTriangleInverted2();
    // diamondShape();
    // numLeftTriangle();
    // numLeftTriangleRepeat();
    // isoscelesAlphabet();
    // numberIncreaseEndWithOne();
    numberIncreaseEndWithOne2();
    return 0;
}