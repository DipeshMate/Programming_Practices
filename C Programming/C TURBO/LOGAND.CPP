#include<stdio.h>
#include<conio.h>

main()
{
clrscr();

int a,b,c;

printf("first digit:\n");
scanf("%d",&a);
printf("second digit:\n");
scanf("%d",&b);
printf("third digit:\n");
scanf("%d",&c);

if(a>b && a>c)
{
 printf("a is greater: %d",a);
}
if(b>a && b>c)
{
printf("b is greater: %d",b);
}
if(c>a && c>b)
{
printf("c is greater: %d",c);
}



getch();
return 0;
}