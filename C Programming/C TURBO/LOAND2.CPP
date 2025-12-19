#include<stdio.h>
#include<conio.h>

int main()
{
clrscr();
int a;
printf("Enter no.:");
scanf("%d",&a);

if(a%3==0 && a%5==0)
{
printf("\nno.is divisible by 3 & 5");
}
if(a%3==0 && a%5!=0)
{
printf("\nno.is divisible by 3 not by 5");
}
if(a%3!=0 && a%5==0)
{
printf("\nno.is divisible by 5 not by 3");
}
if(a%3!=0 && a%5!=0)
{
printf("\nno.is divisible not by 5 or 3");
}

getch();
return 0;
}