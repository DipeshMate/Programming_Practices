#include<stdio.h>

int main(){
	

	int a,i,s,ch;
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
			s=1;
			for(i=1;i<=a;i++)	

			{
			s=s*i;
			}
			printf("\n factorial of %d is %d",a,s);	
		break;
		
		case 3:
			s=0;
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
		}
		else 
		{
			printf("\nimperfect number");
		}
		break;
			
		default:
		 	printf("INVALID");
		
		}
}
