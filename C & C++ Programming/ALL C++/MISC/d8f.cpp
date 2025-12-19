#include <stdio.h>
//divisiblity 1 to x..!!
int main(){
	int i,a;
	printf("Enter no.:");
	scanf("%d",&a);

	for(i=1;i<a;i=i+1)
{
		if(a%i==0)
		{
		printf("\n %d",i);
       }
	
}

return 0;
}
