#include<stdio.h>
#include<conio.h>

int main()
{
clrscr();
int a=12345,b,c,d,e,f,g,h;

printf("%d \n",a);
b=a%10;
printf("%d \n",b);
a=a/10;
c=a%10;
printf("%d \n",c);
a=a/10;
d=a%10;
printf("%d \n",d);
a=a/10;
e=a%10;
printf("%d \n",e);
a=a/10;
f=a%10;
printf("%d \n",f);

g=b+c+d+e+f;
printf("addition of all products:- %d",g);
getch();
return 0;

}