#include<stdio.h>

int main()
{
	
int a,b,i;
scanf("%d %d",&a,&b);

for(i=a;i<=b;i=i+1)
{ 
if(i%2==0)
{
	printf("\nEven %d",i);
}
if(i%2!=0)
{
	printf("\nodd %d",i);
}

}	
	
	
return 0;	
}
