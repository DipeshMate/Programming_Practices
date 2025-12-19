#include<stdio.h>

main()
{
int unit,bill;
printf("Enter Electricity units:-");
scanf("%d",&unit);

if(unit>=1 && unit<=100)
{
bill=unit*2;
printf("%d",bill);
}
if(unit>=101 && unit<=200)
{
bill=unit*3;
printf("%d",bill);
}
if(unit>=201 && unit<=300)
{
bill=unit*4;
printf("%d",bill);
}
if(unit>=301 && unit<=400)
{
bill=unit*5;
printf("%d",bill);
}

}
