#include<stdio.h>
#include<conio.h>

main()
{
clrscr();
int a,b;
scanf("%d %d",&a,&b);
if(a>b)
{
printf("a is greater than b");
}
if(b>a)
{
printf("b is greater than a");
}

if (a==b)
{
printf("Both are equal");
}

getch();

}