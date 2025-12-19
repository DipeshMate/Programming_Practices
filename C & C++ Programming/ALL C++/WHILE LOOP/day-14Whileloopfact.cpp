#include<stdio.h>

int main() {


	
//Question:1 find factorial of input and their sum !?




//int n,b,sum=0,fact=1;
//printf("Enter no.");
//scanf("%d",&n);
//
//while(n!=0){
//	b=n%10;
//	printf("Fact of %d:- ",b);
//	n=n/10; //here, n value is 173 if we will not put this condition then it will show fact. of 2 #infinite...!!!
//	for(int i=1;i<=b;i++)
//	{
//		fact=fact*i;	//here,fact of last digit no. will be execute..!! 
//	}
//	sum=sum+fact;
//	printf("%d\n",fact);
//	fact=1;
////	printf("\nSum:-%d \n",sum);  // one by one fact. sum will show!!
//}
//printf("\nSum:-%d \n",sum);



//Question:-2 Find Prime numbers of the given number & sum it by For and while loop ?? 




//int c=0,sum=0;
//
//for(int i=10;i<=30;i++){
//	for(int j=1;j<i;j++)
//	{
//	if(i%j==0)
//	{
//		c=c+1;
//	}
//}
//if(c==1)
//   {
//	printf("%d is a prime number \n",i);
//	sum=sum+i;
//   }
//   
//c=0;
//}
//printf("Sum of Prime Number is %d \n",sum);



//Question:-3 Put Range between the numbers and get panlandrome & armstrong ??



//int n,a,ch,rev=0,rem,m,sum=0,f,fact,mul;
//
//printf("Enter no.");
//scanf("%d",&n);
//
//printf("Enter Choice:");
//scanf("%d",&ch);
//
//m=n;
//
//switch (ch) 
//{
//	case 1: 
//		while(n!=0){
//			rem=n%10;
//			rev=rev*10+rem;
//			n=n/10;
//		}
//		printf("%d",rev);
//		if(m==rev)
//		{
//			printf("\n%d is a Palindrome number",m);
//		}
//		else{
//			printf("\n%d is not a Palindrome number",m);
//		}
//	break;
//	
//	case 2:
//               //371 is a armstrong no.
//		while(n!=0){
//			a=n%10;
//			sum=sum+(a*a*a); 
//			n=n/10;
//		}
//		printf("%d",sum);
//		if(m==sum)
//		{
//			printf("\n%d is a Armstrong number",m);
//		}
//		else{
//			printf("\n%d is not a Armstrong number",m);
//		}
//		
//	break;
//	
//	case 3:
//	      while(n!=0)
//	      {
//	      	rem=n%10;
//	      	mul=1;
//	      	for(int i=1;i<=rem;i++){
//	      		
//	      		mul = mul*i;
//			  }
//			  sum=sum+mul;
//			  n=n/10;
//		  }
//		  printf("%d",n);
//		  
//		  if(m==sum)
//		  {
//		  	printf("\n%d is a Strong Number",m);
//		  }
//		  else{
//		  	printf("\n%d is not a Strong Number",m);
//		  }
//	
//	break;
//		
//	default:
//		printf("invalid");
//} 


//end part			
return 0;	
}
