#include <stdio.h>

float areaCircle()
{
    float area, r;
    printf("What is the radius of your circle: ");
    scanf("%f", &r);
    area = r * r;
    printf("Area is %6.3f\n", area);
    return 0;
}

int main()
{
    areaCircle();
    return 0;
}