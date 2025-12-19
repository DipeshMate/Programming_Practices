#include<stdio.h>

int main(){
	
	int i,a,b,s=0;
	scanf("%d",&a);
	scanf("%d",&b);
	
	for(i=a;i<=b;i=i+1)
	{
		s=s+(i%10);
}
		printf("\n %d",s);
    	return 0;   
		
}

