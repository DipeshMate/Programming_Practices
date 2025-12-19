#include<stdio.h>
#include<conio.h>

int main()
{
clrscr();
int m,b,e,f,g;

printf("Enter number of Monkey:-",m);
scanf("%d",&m);
printf("\nNo. of Bananas:-",b);
scanf("%d",&b);
printf("\nper Banana Eaten:-",e);
scanf("%d",&e);

f=m-(b/e);
printf("\nBanana's Eaten by monkey:- %d",f);
g=b%e;
printf("\nno. of banana's left:- %d",g);


getch();
return 0;

}