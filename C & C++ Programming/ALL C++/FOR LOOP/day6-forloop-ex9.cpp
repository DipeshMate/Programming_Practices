#include<stdio.h>

int main()
{
	
int a,b,i;
scanf("%d %d",&a,&b);

for(i=a;i<=b;i=i+1)
{ 
if(i%5==0) 
{
   printf("\n divisible by 5 %d",i);
}
if(i%2==0)
{
   printf("\n divisible by 2 %d",i);

}	
	
}
return 0;	
}
