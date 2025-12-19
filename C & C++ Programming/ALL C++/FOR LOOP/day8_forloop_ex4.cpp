#include<stdio.h>

int main(){
	
	int i,a,s=0;
	printf("Enter no.");
	scanf("%d",&a);
	for(i=1;i<a;i++){
		
		if(a%i==0)
		{
			s=s+i;
			printf("%d",i);
		}
	}
					printf("\n sum:%d",s);

		if(s==a)
		{
		 printf("\nPerfect number");
//		 printf("%d",a);
		}
		else 
		{
			printf("\nimperfect number");
//			printf("%d",a);
		}
	
return 0;
}
