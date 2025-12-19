#include<stdio.h>
#include<conio.h>

main()
{
clrscr();
unsigned int a,b,c;
scanf("%d",&a);
b=a/10000;
printf("first digit%d \n",b);
c=a%10;
printf("last digit%d \n",c);
if (b>c)
{
printf("First digit is greater");
}
if(b<c)
{
printf("\nsecond digit is greater");
}
getch();
return 0;
}