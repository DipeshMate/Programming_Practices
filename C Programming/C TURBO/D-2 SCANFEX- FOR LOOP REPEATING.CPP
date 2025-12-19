#include<stdio.h>
#include<conio.h>

int main()
{
clrscr();
int a,b,i;
printf("Enter the Number\n");
scanf("%d",&a);
printf("Enter number of times to repeat \n");
scanf("%d",&b);

for(
i=a;i<=a*b;i=i+a)
{
printf("\n %d",i);
}
getch();
return 0;
}