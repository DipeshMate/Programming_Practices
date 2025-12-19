#include<stdio.h>
#include<conio.h>
void area();
int main()
{
	printf("calculate area of circle");
	area();
}
void area()
{
	float a,r;
	printf("enter the radius");
	scanf("%f",r);
	a=3.14*r*r;
	printf("radius is =%f",a);
}


