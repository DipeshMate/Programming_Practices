#include<stdio.h>

int main(){



//Question:-1 factorial of 5 to 1..!!
	
	
	
	int fact=1;
	for(int i=5;i>=1;i--)
{

	for(int j=i;j>=1;j--)
	{
    	fact=fact*j;
    
   	}
    printf("factorial of %d! is %d",i,fact);

    fact=1;
   	printf("\n");
   	
}

return 0;	
}
