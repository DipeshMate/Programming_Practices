#include<stdio.h>

int main()
{
	
int a,b;
int i,s=0;
scanf("%d %d",&a,&b);

for(i=a;i<=b;i=i+1)
{ 
if(i%3==0 && i%5!=0) 
{
   printf("",s=s+i);
}
if(i%5==0 && i%3!=0) 
{
   printf("",s=s+i);
}	
}
printf("sum:%d",s);
return 0;	
}
