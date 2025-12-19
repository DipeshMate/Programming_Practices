#include<stdio.h>

//void show(int a){
//
//printf("%d",a);
//
//}
//
//
//int main()
//{
//	int a;
//	printf("Enter No:-");
//	scanf("%d",&a);
//	show(a);
//}



//Q-1 Check no. is even or odd..!!!??



//void check(int a){
//	if( a%2 == 0)
//	{
//		printf("%d is Even",a);
//	}
//	if(a%2 != 0)
//	{
//		printf("%d is Odd",a);
//	}
//}
//
//int main(){
//	int a;
//	printf("Enter no:-");
//	scanf("%d",&a);
//	check(a);
//}



//Q-2 factorial of a number..!!?  



//void fact(int n)
//{
//	int i,fact=1;
//	i=n;
//	for(i = 5; i >= 1;i--)
//	{
//	fact=fact*i;
//	}
//	printf("%d",fact);
//
//}
//
//int main(){
//	
//	int n;
//	printf("factorial of no:-");
//	scanf("%d",&n);
//	fact(n);
//}


//Q-3 addition of two number..!!



//void add(int a,int b){
//	int c;
//	c = a + b;
//	printf("%d",c);
//}
//
//int main(){
//	int a,b;
//	printf("Enter two numbers for addition:-\n");
//	scanf("%d %d",&a ,&b);
//	add(a,b);
//}


//Q-4 find prime number..!!??



//void prime(int n){
//	
//	int i,c=0;
//	i=n;
//	for(i = 1; i < n; i=i+1)
//	{
//		if(n%i == 0)
//		{
//			printf("%d \n",i);
//			c = c + 1;
//		}
//}
//	if(c == 1)
//	{
//		printf("%d is a prime number",n);
//	}
//	else if ( c != 1)
//	{
//		printf("%d is not a prime number",n);
//	}
//
//c=0;
//
//}
//
//int main(){
//	int n;
//	printf("Enter no. which should be a prime no.");
//	scanf("%d",&n);
//	prime(n);
//}




//Q-5 fing greatest among  no. !!?



//void great(int m,int b,int n){
//
//while(n!=0)
//{
//	b=n%10;
//	printf("%d \n",b);
//	n=n/10;
//    	
//	if (b>m)
//	{
//     m=b;		
//	}	
//}
//	printf("greatest among no is.:-%d\n",m);
//}
//
//int main(){
//	int m=0,b,n;
//	printf("Enter no: to find which is the greatest number:-\n");
//	scanf("%d",&n);
//	great(m,b,n);
//}


//Q-6 Enter digit and get armstrong number..??


//void armst(int m,int arm,int a,int n){
////	 153,370,371,407 sum of Cube of 3 digit no. and 1634, 8208, 9474 sum of Cube of 4 digit no.
//	m=n;
//	do{
//		
//	a=n%10;
//	arm=arm+(a*a*a);
//	n=n/10;	
//
//	}while(n!=0);
//		
//	printf("%d",arm);
//		
// if(m==arm)
//    {
//	printf("\n%d is a Armstrong number",m);
//    }
// else{
//	printf("\n%d is not a Armstrong number",m);
//     }
//	
//}
//
//int main(){
//	int n,a,arm=0,m;
//	printf("Enter no & find it is a armstrong no or not:-\n");
//	scanf("%d",&n);
//	armst(m,arm,a,n);
//}


//Q-7 find largest number..!! 

	
//void secndlrg(int a,int b,int c)	{
//	
//	if( a > b && a > c )
//	{
//	printf("a is the greater %d",a);	
//	}
//
//	else if ( b > c && b > a)
//	{
//			printf("b is the greater %d",b);	
//
//	}
//	if ( c > a && c > b  )
//	{
//		printf("c is the greater %d ",c);	
//	}
//		
//}
//int main(){
//	int a,b,c;
//
//	printf("Enter Three number:-\n");
//	scanf("%d %d %d",&a,&b,&c);
//	
//	secndlrg(a,b,c); 
//}




