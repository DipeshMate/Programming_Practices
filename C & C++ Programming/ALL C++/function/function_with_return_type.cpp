//Function with Return type 

#include<stdio.h>

//EX-ILLUSTRATOR

//int show()
//{
//	int a = 5,b = 4, c;
//	c = a + b;
//	return c;
//}
//
//main(){
//	int v;
//	v = show();
//	printf("%d",v);
//}


//q-1 factorial...!!??


//int fact()
//{
//	int n,f=1;
//	scanf("%d",&n);
//	for(int i = n;i >= 1;i--)
//	{
//		f=f*i;
//	}
//	return f;
//}
//
//main()
//{
//	int v;
//	v = fact();
//	printf("%d",v);
//
//}



//Q-2 greater no...!!!



//int great()	{
//	
//		int a,b,c;
//		printf("Enter Three number:-\n");
//     	scanf("%d %d %d",&a,&b,&c);
//
//	if( a > b && a > c )
//	{
//	return a;	
//	}
//
//   else  if ( b > c && b > a)
//	{
//	return b;
//	}
//	
//   else if ( c > a && c > b  )
//	{
//	return c;	
//	}
//	
//}
//
//main()
//{
//     int v;
//     v = great();
//     printf("\n%d",v);
//}



//Q-3  2nd prime number...!!??


//int prime(){
//	
//	int c=0,i,n=20;
//	while(1);
//	{	
//	n++;
//	for( i = 1; i <= n/2;i=i+1){
//		if( n%i == 0 )
//		{
//			c = c + 1;
//		}
//}
//   if ( c == 1 )
//   {
//      
//   }
//   c=0;
//}
//return n;
//}
//
//main(){
//	int n;
//	n = prime();
//	printf("%d",n);	
//}


//Q-2 find the maximum number in the inputs!!?



int a[5],max;

max=a[1];
printf("Enter 5 no.\n");

for(int i = 0; i < 5; i++)
{
	scanf("%d",&a[i]);
}
for(int i = 0; i < 5; i++)
{
	if(a[i] > max)
	{
		max = a[i];
		printf("\n");
	}
}
		printf("Maximum no:%d",max);



