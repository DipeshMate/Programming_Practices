
#include <stdio.h>

int main() {
    int a,i,n=1;
	scanf("%d",&a);
	for(i=1;a>=i;i++){ 
		n = n*i;
	}
    printf("factorial of a is %d", n);
	return 0;
}
