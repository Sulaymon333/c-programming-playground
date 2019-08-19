#include <stdio.h>

int main()
{
    int age;
    char MaritalStatus, Gender;

    printf("Enter Marital Status, Genger, Age: (e.g. m,f,24 ): \n");
    scanf("%c, %c, %d", &MaritalStatus, &Gender, &age);

    if (MaritalStatus == 'm')
    {
        printf("You are married already.\n");
    }
    else if (MaritalStatus == 'u')
    {
        if (Gender == 'm')
        {
            if (age >= 21)
            {
                printf("You can marry.\n");
            }
            else
            {
                printf("You cannot marry, wait for sometime.\n");
            }
        }
        else if (Gender == 'f')
        {
            if (age >= 18)
            {

                printf("You can marry.\n");
            }
            else
                printf("You cannot marry, wait for sometime.\n");
        }
        else
        {
            printf("Invalid input for gender.\n");
        }
    }
    else
    {
        printf("Invalid input for marital status.\n");
    }

    return 0;
}