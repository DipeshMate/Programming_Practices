#include<stdio.h>

int main(){
	

	int a,i,s=0,ch;
	printf("Enter no.");
	scanf("%d",&a);
	
	printf("enter choice");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
			if(a%2==0)
			{
				printf("Even Number%d",a);
			}
			else 
			{
				printf("Odd Number%d",a);
			}
		break;	
		
		case 2:
			for(i=a;i<=a;i++)
			{
			s=s*i;
			printf("%d",s);	
			}
		break;
			
		default:
		 	printf("INVALID");
			 
			 }
}
