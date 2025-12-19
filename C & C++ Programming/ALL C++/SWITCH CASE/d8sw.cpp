#include<stdio.h>

int main(){
	

	int a,i,s=1,ch;
	printf("Enter no.");
	scanf("%d",&a);
	
	printf("enter choice: ");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
			if(a%2==0)
			{
				printf("Even Number",a);
			}
			else 
			{
				printf("Odd Number",a);
			}
		break;	
		
		case 2:
			for(i=1;i<=a;i++)
			{
			s=s*i;
			}
			printf("\n factorial of %d is %d",a,s);	
		break;
		
		case 3:
			for(i=1;i<a;i=i+1){
		
		if(a%i==0)
		{
			s=s+i;
			printf("%d",i);
		}
	}
		printf("\n %d",s);
		if(s==a)
		{
		 printf("\nPerfect number");
		 printf("%d",a);
		}
		else 
		{
			printf("\nimperfect number");
			printf("%d",a);
		}
		
		
			
		default:
		 	printf("INVALID");
		
			 }
}
