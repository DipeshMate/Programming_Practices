#include<stdio.h>
#include<conio.h>

int main()
{
clrscr();
int a,b,c,d;
scanf("%d",&a);
b=a/100;
printf("first number %d \n",b);
c=a%10;
printf("last number %d \n",c);
d=b+c;
printf("addition of both numbers %d",d);




getch();
return 0;

}