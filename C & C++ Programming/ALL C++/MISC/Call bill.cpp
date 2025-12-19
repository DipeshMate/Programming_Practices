#include<stdio.h>

main()
{
int call,bill;
printf("Enter call:-");
scanf("%d",&call);

if(call>=1 && call<=100)
{
bill=200;
printf("%dRs",bill);
}
if(call>=101 && call<=200)
{
bill=200+(call-100)*3;
printf("%dRs",bill);
}
if(call>=201 && call<=300)
{
bill=200+300+(call-200)*4;
printf("%dRs",bill);
}

}
