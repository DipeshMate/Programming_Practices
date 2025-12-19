#include<stdio.h>
#include<conio.h>
int sum(int);
int main()
{
	int total;
	total=sum(5);
	printf("sum of 1 st five integer is %d",total);
	getch();
}
int sum(int x)
{
if(x==1)
return x;
else;
return x+sum(x-1);
}

