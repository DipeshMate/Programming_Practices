#include<stdio.h>
#include<conio.h>

main()
{
clrscr();
int i1=100, i2=200, i3=300,a,d,t;
a=i1+i2+i3;
d=a*10/100;
t=a-d;

printf("Addition %d\n Division %d \n Remaining %d \n",a,d,t);
getch();
}