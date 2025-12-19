#include<stdio.h>

int main()
{
int j,n=10;
scanf("%d",&j);

if(j>=0 && j<=5)
{
printf("Number of Candies Sold:- %d \n",j);
printf("Number of Candies Available:- %d",n-j);
}
else 
{ 
printf("INVALID INPUT \n");
printf("Number of Candies Left: %d",n);
}

return 0;
}




