#include<stdio.h>

int main(){
	
	int i,a,s=0;
	printf("Enter no.");
	scanf("%d",&a);
	for(i=1;i<a;i=i+1){
		
		if(a%i==0)
		{
			s=s+i;
			printf("%d\n",i);
		}
	}
		printf("\nSum of no.:-%d",s);
		if(s == a)
		{
		 printf("\n%d is a Perfect number ",a);
		}
		else if(s != a)
		{
			printf("\n%d is a imperfect number ",a);
		}
	
return 0;
}
