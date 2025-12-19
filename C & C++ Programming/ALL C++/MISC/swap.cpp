#include<stdio.h>

int main()
{
int a,b;
printf("Enter the value of a & b\n");
scanf("%d \n %d",&a,&b);

a=a+b;
b=a-b;
a=a-b;
printf("a=%d \n",a);
printf("b=%d",b);


//for two array into third array..!!
//
//int a[5]={10,20,30,40,50};
//int b[5] = {1,2,3,4,5};
//int c[10];
//int k=0;
//int m=0;
//for(int i=0;i<5;i++){
//	c[k] = a[i];
//	k = k+2;
//}
//for(int j=0;j<5;j++){
//	c[m+1] = b[j];
//	m = m+2;
//}
//for(int l=0;l<10;l++){
//	printf("%d ",c[l]);
//}


}
