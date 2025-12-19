#include<stdio.h>

int main()
{
	
int a,b,i;
scanf("%d %d",&a,&b);

for(i=a;i<=b;i=i+1)
{ 
if(i%5==0 && i%3==0) 
{
   printf("\n %d",i);
}
		
}
return 0;	
}
