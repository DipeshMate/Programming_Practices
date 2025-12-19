#include<stdio.h>
#include<string.h>

//Q-1 even odd..!!??


//main()
//{
//
//int a;
//int *p=&a;
//
//printf("Enter no.:-");
//scanf("%d",p);
//
//if(*p%2==0)
//{
//	printf("%d is even",*p);
//}
//else
//{
//	printf("%d is odd",*p);
//}
//	
//}

//Q-2 addition...!!!

//
//main()
//{
//
//int a,b,c;
//int *p=&a, *q=&b;
//scanf("%d %d",p,q);
//
//c = *p + *q;
//printf("addition=> %d",c);	
//}


//Q-3 find greater of 3..!!
//
//
//main(){
//
//int a,b,c;
//
//int *p=&a, *q=&b, *r=&c;
//
//scanf("%d %d %d",p,q,r);
//
//if(*p>*q)
//{
//	printf("%d is greater",a);
//}
//else if(*q>*r)
//{
//	printf("%d is greater",b);
//}
//else if(*r>*p)
//{
//	printf("%d is greater",c);
//}
//
//}

//Q-4 swap..!!

//
//main()
//{
//int a,b,c;
//
//int *p=&a, *q=&b, *r=&c;
//
//printf("enter for a=");
//scanf("%d",p);
//printf("enter for b=");
//scanf("%d",q);
//
//*p=*p+*q;
//*q=*p-*q;
//*p=*p-*q;
//
//printf("a=%d\n",a);	
//printf("b=%d",b);	
//
//}

//Q-5 make an array to get max out of five..!!??

//main(){
//
//int a[5],max;
//int *p=&a[0];
//
//printf("Enter 5 numbers to get max no.:-\n");
//for(int i=0; i<5; i++)
//{
//	scanf("%d",p+i);
//}
//
//max=*(p+0);
//
//for(int i=0; i<5; i++)
//{	
//  if( *(p+i) > max)
// {
//   max= *(p+i);
//   printf("\n");
// }
//}
//printf("%d",max);	
//
//}

//Q-6 make an array of minimal digit out of 5..!!

//
//main(){
//
//int a[5],min=0;
//int *p=&a[0];
//
//printf("Enter 5 numbers to get min no.:-\n");
//for(int i= 0;i<5;i++)
//{
//scanf("%d",p+i);
//}	
//
//min=*(p+0);
//for(int i=0;i<5;i++)
//{
//	if(*(p+i) < min)
//	{
//		min=*(p+i);
//		printf("\n");
//	}
//}
//	printf("%d",min);
//}



//Q-7 reverse order of an array...!!?


//main(){
//
//int a[5];
//int *p=&a[0];	
//
//printf("enter no:-");
//
//for(int i=5;i>0;i--)
//{
//	scanf("%d",p+i);
//}	
//for(int i=1;i<=5;i++
//)
//{
// printf("%d",*(p+i));	
//}
//
//}


//Q-8 get the sum of even no. in an array..!!?


//main(){
//	
//int a[6],sum=0;
//int *p=&a[0];	
//
//printf("Enter no.:-");
//for(int i=0;i<6;i++)
//{
//scanf("%d",p+i);
//}
//sum=0;
//for(int i=0;i<6;i++)
//{
//	if( *(p+i) % 2 == 0 )
//	{
//		printf("Even No. are:-%d\n",*(p+i));
//		sum = sum + *(p+i);
//	}	
//}
//	printf("\nsum are:-%d",sum);
//}


//Q-9 addition two array to the third..!!


//main(){
//
//int a[5],b[5],c[5];
//int *p=&a[0],*q=&b[0],*r=&c[0];	
//
//printf("Enter no.:-\n");
//
//for(int i=0;i<5;i++)
//{
//	scanf("%d",p+i);
//}
//for(int i=0;i<5;i++)
//{
//	scanf("%d",q+i);
//}
//
//for(int i=0;i<5;i++)
//{
//*(r+i) = *(p+i)	+ *(q+i);
//printf("sum:-%d\n",*(r+i));
//}		
//
//}


//Q-10 find the prime numbers of given inputs!!!


//main()
//{
//
//int a[5],i,j,c;
//int *p=&a[0];
//
//printf("Enter Array Elements.:-\n");
//for(int i=0;i<5;i++)
//{
//scanf("%d",p+i);	
//}	
//
//printf("Prime numbers are:-\n");
//for(int j=0;j<5;j++)
//{
//	for(int i=1;i <= *(p+j);i++)
//	{
//		if( *(p+j) %i ==0 )
//		{
//			c = c + 1;
//    	}
//	}
//	
//	if(c == 2)
//	{
//		printf("%d\n",*(p+j));
//	}
//  	c=0;
//}
//	
//}


//Q-11 find the perfect numbers from the inputs and their sum!!!
//perfect numbers are those in which are divisor and sum will are equal... 6,8,496..!!

//
//main(){
//
//
//int a[5],i,j,s;
//
//int *p=&a[0];
//
//printf("Enter no.\n");
//
//for(int i=0;i<5;i++)
//{
//	scanf("%d",p+i);
//}
//
//
//for(int j=0;j<5;j++)
//{
//	s=0;
//for(int i=1;i<*(p+j); i++)
//{
//   if( *(p+j)%i == 0 )
//   {
//    s=s+i;
////      printf("sum:-%d",i);
//   }   	
//}
//
//	if(s == *(p+j))
//		{
//		 printf("\n%d is a Perfect number ",*(p+j));
//		}
//	else if(s != *(p+j))
//		{
//			printf("\n%d is a imperfect number ",*(p+j));
//		}
//	
//}
//
//}

//Q-12 seacrch no. in an array..!!!


//main(){
//
//int a[5],z,c=0,i;
//int *p=&a[0];
//
//printf("Enter no:- ");
//for(int i=0;i<5;i++)
//{
//scanf("%d",p+i);
//}
//
//printf("Enter no to be Search:-");
//scanf("%d",&z);
//for(int i=0;i<5;i++)
//{
//	if( *(p+i) == z )
//	{
////		printf("\n%d no. is in an array",i+1);
//		c = c + 1;
//		printf("\n%d no. is in an array",i+1);
//	}
//}
////   if( *(p+i) != z )
//	if( c == 0 )
//	{
//		printf("%d is not in an array",z);
//	}
//
//	
//} 

//Q-13 accumalate two arrays into one..!!


//main()
//{
//
//int a[5],b[5],c[10];
//
//int *p=&a[0], *q=&b[0], *r=&c[0];
//
//printf("Enter first five numbers:-\n");
//for(int i=0;i<5;i++)
//{
//	scanf("%d",p+i);
//}	
//printf("Enter second five numbers:-\n");
//for(int i=0;i<5;i++)
//{
//	scanf("%d",q+i);
//}
//
//for(int i=0;i<5;i++)
//{
//	*(r+i)=*(p+i);
//  printf("%d",*(r+i));	
//}
//for(int i=5;i<10;i++)
//{
//	*(r+i)=*(q+i-5);
//  printf("%d",*(r+i));	
//}
//
//}


//Q-14 vowel..!!

//main()
//{
//int t;
//char c[30];
//char *p=&c[0];	
//		
//scanf("%s",p);		
//	
//for(int i=0;i<5;i++)
//{	
//if( *(p+i) == 'a' || *(p+i) == 'e' || *(p+i) == 'i' || *(p+i) == 'o' || *(p+i) == 'u' )
//{
// t=t+1;
// printf("%s is vowel",p+i);
//}
//}
// if ( t==0 )
//{
//	printf("%s is consonent",c);
//}
//
//}

//Q-15 palindrome number..!!


//main()
//{
//	
//int a[1],i,m,rev=0,rem;	
//int *p=&a[0];
//
//for(int i=0;i<2;i++)
//{
//	scanf("%d",p+i);
//}
//
//for(int i=0;i<2;i++)
//{
//	m=*(p+i);
//	
//	while(*(p+i) != 0)
//	{
//		rem=*(p+i) % 10;
//		rev=rev * 10 + rem;
//		*(p+i) = *(p+i) / 10 ;
//	}
//  if(m==rev)
//  {
//  	printf("%d is a palindrome number\n",rev);
//  }
//  else if(m!=rev)
//  {
//  	printf("\n%d is not a palindrome number",rev);
//  }
//  rev=0;
//}	
//}


//Q-15 palindrone by String..!!!


//
//main()
//{
//
//char c[30];
//int l,d;
//
//char *p=&c[30];
//
//printf("Enter name to get its palindrome:-");
//scanf("%s",p);
//
//l=0;
//for( int i = 0; *(p+i) != '\0'; i++)
//{
//	l++;
//}
//
//d=0;
//for(int i = 0; *(p+i) != '\0';i++ )
//{
//	if( *(p+i) != *(p+(l-i-1)) )
//	{
//		d=d+1;
//	}
// 
//// printf("%c",*(p+(l-i-1)));
//}
////printf("Done");
//if( d==0 )
//{
//	printf("%s is a palindrome Name",p);
//}
//else if( d!=0 )
//{
//printf("%s is not a palindrome Name",p);
//}
//
//}



//Q-16 count name with out space..!!!

//
//main()
//{
//
//int d=0;
//char c[30];
//gets(c);
//
//for(int i = 0; c[i] != '\0'; i++)
//{
//	if( c[i] == ' ')
//	{
//	}
//  else
//		{
//		d++;
//      }
//}
//printf("%d",d);
//
//}

//Q-17 Add first & last/second & fourth/third & third in the inputs from the array !!? 

//
//main()
//{
//	
//int a[5],c,sum;
//int *p=&a[0];
//
//for(int i=0;i<5;i++)
//{
//scanf("%d",p+i);	
//}	
//
//for(int i=0;i<5;i++)
//{
//c=*(p+i)+ (5-i);
//printf("%d\n",c);
//sum=sum+c;
//}	
//printf("sum:-%d",sum);	
//}

//******************************************************

//Q-18 


//Call By Value...!!

//void show(int a)
//{
//a=7;
//}
//
//main(){
//int a=6;
//show(a);
//printf("%d",a);	
//}


//call by reference..!!

////actual argument..!!


//void show(int *p)
//{
//	*p=7;
//}


////formal argument ..!!

//main()
//{
//	int a=6;
//	show(&a);
//	
//	printf("%d",a);
//}

//Q-2 swap..!!
 
//void swap(int a,int b)
//{
//	int c;
//	c=a;
//	a=b;
//	b=c;
//}
//
//main()
//{
//	int a,b;
//	printf("Enter no:-\n");
//	scanf("%d%d",&a,&b);
//	
//	swap(a,b);
//printf("%d%d",a,b);
//}


//void swap(int *p,int *q)
//{
//	int c;
//	c=*p;
//	*p=*q;
//	*q=c;
//}
//
//main()
//{
//	int a,b;
//	printf("Enter no:-\n");
//	scanf("%d%d",&a,&b);
//	
//	swap(&a,&b);
//printf("%d%d",a,b);
//}


//factorial..!!


//void fact(int *p)
//{
//   int f=1;
//	for(int i=1;i<=*p;i++)
//	{
//		f=f*i;
//	}
//	*p=f;		
//}
//main(){
//
//int n,f;
//printf("Enter no.:-\n");
//scanf("%d",&n);
//
//fact(&n);
//printf("%d",n);
//	
//}


//sum of digits

//void sum(int *p)
//{
//	int b,s=0;
//	while(*p!=0)
//	{
//	b=*p%10;
//	s=s+b;
//	*p=*p/10;
//	}
//	*p=s;
//}
//
//main()
//{
//int n;
//
//printf("Enter no.:-\n");
//scanf("%d",&n);
//
//sum(&n);
//printf("%d",n);
//}











