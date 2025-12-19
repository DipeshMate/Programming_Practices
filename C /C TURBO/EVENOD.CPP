#include<stdio.h>
#include<conio.h>

int main()
{
clrscr();
int num;
scanf("%d",&num);
if(num%3==0)
{
printf("num is divisible by 3");
}
else
{
printf("num is Not divisible by 3");
}
getch();
return 0;

}