#include<stdio.h>

int main(){

//Question:-1 find factorial of 5 to 1 ??
	
//	int fact=1;
//	for(int i=5;i>=1;i--)
//{
//
//	for(int j=i;j>=1;j--)
//	{
//    	fact=fact*j;
//    
//   	}
//    printf("factorial of %d! is %d",i,fact);
//
//    fact=1;
//   	printf("\n");
//   	
//}

//Question:-2 find factorial of odd numbers 1,3,5,7 ??


//	int fact=1;
//	for(int i=1;i<=7;i=i+2)
//{
//	for(int j=i;j>=1;j--)
//	{
//    	fact=fact*j;
//   	}
//    printf("factorial of %d! is %d",i,fact);
//	fact=1;
//   	printf("\n");
//   	
//}

//Question:-3 find factorial of 1 to 5 and there sum ??

//	int fact=1,s=0;
//	for(int i=1;i<=5;i++)
//{
//
//	for(int j=i;j>=1;j--)
//	{
//    	fact=fact*j;
//    	
//    
//   	}
//    printf("factorial of %d! is %d",i,fact);
//    s=s+fact;
//    
//    fact=1;
//   	printf("\n");	
//   	
//}
//
//printf("\n sum:%d",s);

//Question:-4 Put the value 7 and show all the factorial upto 7 ??

//int fact=1,n;
//
//printf("Enter the value to find factorial upto:");
//scanf("%d",&n);
//
//for(int i=1;i<=n;i++)
//{
//	for(int j=i;j>=1;j--) {
//		fact=fact*j;
//}
//printf("Factorial of %d is %d",i,fact);
//fact=1;
//printf("\n");
//
//}

//Question:-5 find the power of given input ??

//int f=1,p;
//
//printf("Enter the No.:");
//scanf("%d",&p);
//
//for(int i=1;i<=3;i++) 
//{
//f=f*5;
//}
//printf("The value of %d is: %d",p,f);

//Question:-6 find the value of given no. powers ??

//
//int f=1,p;
//printf("Enter the Number to get power:");
//scanf("%d",&p);
//
//for(int i=7;i>=1;i=i-2) {
//
//  for(int j=i;j>=1;j--)
//  {
//f=f*p;
//}
//printf("\n 5 to the power of %d is: %d",i,f);
//f=1;
//printf("\n");
//
//}

//Question:-7 find the value of given no. powers and their sum??

//int f=1,x,s=0;
//printf("Enter the Number to get power:");
//scanf("%d",&x);
//
//for(int i=1;i<=x;i=i+2)
//{
//	for(int j=i;j>=1;j--) {
//	f=f*x;	
//   }
//	printf("\n %d to the power of %d is: %d",x,i,f);
//	s=s+f;
//	f=1;
//	printf("\n");
//}
//printf("\nSum:%d",s);

//Question:-8 find the value of inputs to get powers and their sum??

//
//int f1=1,f2=1,x,y,s=0;
//printf("value of x is:");
//scanf("%d",&x);
//printf("value of y is:");
//scanf("%d",&y);
//
//for(int i=1;i<=4;i++)
//{
//	for(int j=1;j<=i;j++) 
//   {
//	f1=f1*x;	
//    }
//   for(int j=1;j<=i-1;j++) 
//   {
//	f2=f2*y;	
//    }
//   printf("\n%d \n%d",f1,f2);
//   s=s+f1/f2;
//   
//  printf("\nSum:%d",s);
//	printf("\n");
//}

//Question:-9 find the value of inputs to get powers and their sum??


//int f1=1,f2=1,x,y,s=0;
//printf("value of x is:");
//scanf("%d",&x);
//printf("value of y is:");
//scanf("%d",&y);
//
//for(int i=5;i>=1;i--)
//{
//for(int j=1;j<=i;j++) 
//{
//	f1=f1*x;
//}
//for(int j=1;j<=6-i;j++) 
//{
//	f2=f2*y;
//}
//printf("\n%d \n%d",f1,f2);
//s=s+f1/f2;
//
//printf("\n Sum:%d",s);
//printf("\n");	
//}

//Question:-10 find the value of inputs to get powers and their sum??

//int f1=1,f2=1,x,y,s=0;
//printf("Value of x is:");
//scanf("%d",&x);
//printf("Value of y is:");
//scanf("%d",&y);
//
//for(int i=0;i<=6;i=i+2)
//{
//	for(int j=1;j<=i;j++) 
//	{
//     f1=f1*x;
//    }
//   	for(int j=1;j<=i+1;j=j++) 
//	{
//     f2=f2*y;
//    }
//	
//printf("\n%d \n%d",f1,f2);
//s=s+f1/f2;	
//	
//printf("\n Sum:%d",s);
//printf("\n");	
//}

//Question:-11 find the Range between inputs and get all prime no. ??


int c=0,x,y;
printf("Value of x is:");
scanf("%d",&x);
printf("Value of y is:");
scanf("%d",&y);

for(int n=x;n<=y;n++) 
	{
	for(int i=1;i<n;i++) 
	{
    if(n%i==0)
    {
    c=c+1;
	}
}
if(c==1)
	{
	 	printf("%d is a prime number \n",n);
	}
    c=0;
}


return 0;	
}


