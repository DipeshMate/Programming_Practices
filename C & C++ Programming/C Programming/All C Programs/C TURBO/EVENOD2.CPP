#include<stdio.h>
#include<conio.h>

main()
{
clrscr();
int num;
 scanf("%d",&num);

if(num%11==0)
{
printf("num is Even");
}
if(num%11!=0)
{
printf("num is Odd");
}

getch();
}