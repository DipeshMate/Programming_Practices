#include<stdio.h>
#include<conio.h>

int main()
{
clrscr();

int a;
printf("Enter no.");
scanf("%d",&a);
if(a>0)
{
printf("Positive no.");
}
if(a<0)
{
printf("Negative no.");
}
if(a==0)
{
printf("Zero");
}

getch();
return 0;
}