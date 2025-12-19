#include<stdio.h>
#include<conio.h>

int main()
{
clrscr();
int num,a,b,c;
scanf("%d %d %d",&a,&b,&c);
num=a+b+c;
if(num%2==0)
{
printf("no.is Even %d",num);
}
if(num%2!=0)
{
printf("no.is Odd %d",num);
}


getch();
return 0;

}