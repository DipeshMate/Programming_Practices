#include<stdio.h>
#include<conio.h>

int main()
{
clrscr();

int num,a,b,c,d;
scanf("%d",&num);

a=num%10;
printf("value of a:%d \n",a);
num=num/10;
b=num%10;
printf("value of b:%d \n",b);
c=num/10;
printf("value of c:%d \n",c);

d=a+b+c;
printf("addition:%d \n",d);

if(d%2==0)
{
printf("no.is Even:%d",d);
}
if(d%2!=0)
{
printf("no.is Odd:%d",d);
}


getch();
return 0;
}