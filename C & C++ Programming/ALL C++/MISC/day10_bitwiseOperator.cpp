#include<stdio.h>

int main() {
	
//int a=4,b=5,c;
//c=(a+b)*(a>>2);
//printf("%d",c);	
	
	
	
int a=17, b=5, c;

c=a+(a^b)+(a/b)-(a&b)+(a<<2)*(a>>3);
printf("%d",c);	
	
return 0;	
}
