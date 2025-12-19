#include <stdio.h>

// find no. of divisor of input..!!?
int main(){
	int i,a;
	printf("Enter no.:");
	scanf("%d",&a);

	for(i=1;i<=a;i++)
{
		if(a%i == 0)
		{
		printf("\n %d",i);
       }
	
}
return 0;
}
