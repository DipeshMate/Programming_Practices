#include<stdio.h>

int main()
{
	
int a,b,i;
scanf("%d %d",&a,&b);

for(i=a;i<=b;i=i+1)
{ 
if(i%10==3 || i%10==5) 
{
   printf("\n %d",i);
}
		
}
return 0;	
}
