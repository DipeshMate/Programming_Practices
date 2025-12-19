#include<stdio.h>
#include<conio.h>

int main()
{
clrscr();

int amt,a,b,c,d;

printf("Enter the Amount:-");
scanf("%d",&amt);

printf("\nno. of Notes we have 500rs & 200rs\n");

a=amt/500;
printf("\nno. of 500rs Notes used: %d\n",a);
amt=amt%500;
printf("\nRemaining amount:%d\n",amt);
b=amt/200;
printf("\nno. of 200rs Notes Used:%d \n",b);
amt=amt%200;
c=a+b;
printf("\nRemaining: %d %d",c,amt);

getch();
return 0;
}