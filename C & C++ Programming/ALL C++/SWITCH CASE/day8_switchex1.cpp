#include<stdio.h>

int main(){
	

	int a,b,c,ch;
	printf("Enter no.");
	scanf("%d %d",&a,&b);
	
	printf("enter choice");
	scanf("%d",&ch);
	
	switch(ch)
{
	case 1:
		c=a+b;
		printf("%d",c);
	break;
	
	case 2:
	    c=a-b;
        printf("%d",c);
    break;
    
    default:
    	printf("INVALID");
		
	}	
	
	
return 0;
}

