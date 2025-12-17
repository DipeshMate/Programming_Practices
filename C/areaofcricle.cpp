#include <stdio.h>
#include <conio.h>
#define PI 3.14
int main()
{

    float radius, area;

    printf("Enter Radius");
    scanf("%f", &radius);

    area = PI * radius * radius;
    printf(" Area of circle:- %f", area);
}