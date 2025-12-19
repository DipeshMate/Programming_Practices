#include<stdio.h>

//void show()
//{
//printf("Ashok");	
//}
//int main()
//{             //three times it wil show #ashok 
//	show();
//		show();  
//	show();
//
//}




//Q-1 Addition of 2D Array by Column..!!



//void Addition_1()
//{
//	int a[3][3]={1,2,3,4,5,6,7,8,9};
//	int b[3][3]={1,2,3,4,5,6,7,8,9};
//	int c[3][3],i,j;
//	
//	printf("Addition of 2D Array by Column:-\n");
//	for(i = 0; i < 3; i++)
//	{
//		for(j = 0;j < 3; j++)
//		{
//			
//			c[i][j]=a[j][i]+b[j][i];
//			printf("%d ",c[i][j]);
//
//		}
//		printf("\n");
//	}
//	
////End of Void	
//}
//
//int main()
//{
//	Addition_1();
//}




//Q-2 factorial of number upto 5 to 1...!!!



//void fact()
//{
//	
// int i,j,fact = 1;
// 
// for(i = 5; i >= 1;i--)
// {
// 	for(j = i; j >= 1;j--)
// 	{
// 		fact=fact*j;
//	 }
//	printf("factorial of %d! is %d\n",i,fact);
//
// fact = 1;
// printf("\n");
// }
////end of void
//}
//
//int main(){
//	fact();
//}


//Q-3 get prime numbers..!!



void prime()
{

int c=0,sum=0;

for(int i=10;i<=30;i++){
	for(int j=1;j<i;j++)
	{
	if(i%j==0)
	{
		c=c+1;
	}
}
if(c==1)
   {
	printf("%d is a prime number \n",i);
	sum=sum+i;
   }
   
c=0;
}
printf("Sum of Prime Number is %d \n",sum);
	
//end of prime	
}

int main()
{
	prime();
}
