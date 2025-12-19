#include<stdio.h>
#include<conio.h>

int main()
{
clrscr();
int a,b,c;

printf("Enter the Length:-");
scanf("%d",&a);

b=a%100;
c=a/100;
printf("Centemeter=%d\nmeter=%d",b,c);

getch();
return 0;
}