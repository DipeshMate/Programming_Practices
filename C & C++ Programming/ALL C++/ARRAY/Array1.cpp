// Array => Collection of Similar values
//int a[5]; [0][1][2][3][4]

#include<stdio.h>

int main(){
	
//Q-1 Put Inputs and find it's Sum!!??

	
//int a[5],i,s=0;
//
//printf("Enter 5 no. \n");
//
//for( i = 0; i < 5; i++)
//{
//	scanf("%d",&a[i]);
//}	
//for( i = 0; i < 5; i++)
//{
//	printf("\n%d",a[i]);
//	s=s+a[i];
//}
//	printf("\nSum:-%d",s);
	


//Q-2 find the maximum number in the inputs!!?



//int a[5],max;
//
//max=a[0];
//printf("Enter 5 no.\n");
//
//for(int i = 0; i < 5; i++)
//{
//	scanf("%d",&a[i]);
//}
//for(int i = 0; i < 5; i++)
//{
//	if(a[i] > max)
//	{
//		max = a[i];
//		printf("\n");
//	}
//}
//		printf("Maximum no:%d",max);



//Q-3 find the minimum number in the inputs!!?



//int a[5],min;
//
//printf("Enter 5 no.\n");
//
//for(int i = 0; i < 5; i++)
//{
//	scanf("%d",&a[i]);
//}
//min=a[0];
//
//for(int i = 0; i < 5; i++)
//{
//	if(a[i] < min)
//	{
//		min = a[i];
//		printf("\n");
//	}
//}
//  	printf("Minimum no:%d",min);



//Q-4 put the inputs and get reverse of it??



//int arr[5];
//
//printf("Enter no:\n");
//for(int i = 5; i > 0; i--)
//{
//	scanf("%d",&arr[i]);
//}
//for(int i = 1; i <= 5; i++)
//{
//	printf("\n%d",arr[i]);
//}
//  printf("\n");



//Q-5 find the prime numbers of given inputs!!!


//
//int arr[5],i,j,c;
//
//printf("Enter array elements:\n");
//
//for( i = 0; i < 5; i++) // for entering inputs 5 times
//{
//	scanf("%d",&arr[i]);
//}
//printf("Prime no.are:\n");
//
//for( j = 0; j < 5; j++) // 
//{
//for( i = 1; i <= arr[j]; i++)  //here, we can put condition ( i < arr[j]/2 ) and below also we have to put ( c == 1 ) 
//{	
//	if(arr[j] % i == 0)
//	{
//	c = c + 1;
//	}
//}
//  if(c == 2)  // here, we can put ( c == 1 ) if ^ above statement!!
//	{
//		printf("%d\n",arr[j]);
//	}
//	c = 0; //for another value
//
//}



//Q-6 Searching an array in inputs!!??


//int a[5],z,i;
////int c = 0; by couting method
//
//printf("Enter no.\n");
//
//for( i = 0; i < 5; i++) // loop will run 5 times
//{
//	scanf("%d",&a[i]);
//}
// printf("\nSearch no:"); 
// scanf("%d",&z);           // putting inputs
//for( i = 0; i < 5; i++)
//  
//{ 
//	if( a[i] == z )
//	{
//	  printf("\n%d no. in an array",i+1);
//	  break;
////      c = c + 1;
//	}
//}  
//   if ( a[i] != z )
////   if (c == 0)
//   {
//       printf("%d is not in an array",z);
//   }
//printf("\n");



//Q-7 find the perfect numbers from the inputs and their sum!!!


//
//int arr[5],i,j,s=0;
//
//printf("Enter no.\n");
//for( i = 0; i < 5; i++)
//{
//scanf("%d",&arr[i]); //enter 5 numbers!!
//}
//for( j = 0; j < 5; j++ ) 
//{
//    s=0;
// for( i = 1; i < arr[j]; i++ )
//	
//	{
//	   if( arr[j] % i == 0 )
//		{
//			s = s + i;
////			printf("%d",i);
//		}
//	}
//		
//	if(s == arr[j])
//		{
//		 printf("\n%d is a Perfect number ",arr[j]);
//		}
//	else if(s != arr[j])
//		{
//			printf("\n%d is a imperfect number ",arr[j]);
//		}
//	
// }
 
 
 
//Q-8 find the Numbers is Palindrome number or not..!!??
//123
//121
//343
//
//
// int arr[3],i,rem,rev=0,m;
// 
// printf("Enter no.\n");
// 
// for(i = 0; i < 3; i++)
// {
// scanf("%d",&arr[i]); // enter 3 digit no.
// }
//
//
//for(i = 0; i < 3;i++)
//{
//m=arr[i];
//
//while (arr[i] != 0){
//	rem = arr[i] % 10;
//	rev = rev * 10 + rem;
//	arr[i] = arr[i] / 10;
//}
//printf("\n%d",rev);
//
//if(m==rev)
//{
//	printf("\n%d is a Palandrome Number\n",m);
//}
//else if (m!=rev)
//{
//	printf("\n%d is not a Palandrome Number\n",m);
//}
//rev=0;
//}



//Two three Array
//Q-9 Adding the Numbers of different array..!!??




//int a[5],b[5],c[5],i;
//
//printf("Enter No:\n"); //Enter Number 5 times Both In A & B!!??
//
//for( i = 0; i < 5; i++ )
//{
//scanf("%d",&a[i]);     //Enter 5 numbers in a array
//}
//for( i = 0; i < 5; i++ )
//{
//scanf("\n%d",&b[i]);   //Enter 5 numbers in b array
//}
//
//
//for( i = 0; i < 5; i++ ) // Addition of both a[i] + b[i] 
//{
//  c[i] = a[i] + b[i];
//  printf("\n%d\n",c[i]);
//}




//Q-10 Enter digits in Both the Array's and Find Common between them..!!??



//int a[5],b[5],i;
//
//printf("Enter Numbers & Find Common Numbers Between Them\n");
//
//for(i = 0; i < 5; i++)
//{
//	scanf("%d",&a[i]); //Enter 5 numbers in a array
//}
//printf("\n");
//for(i = 0; i < 5; i++) 
//{
//	scanf("%d",&b[i]); //Enter 5 numbers in b array
//}
//
//for(i = 0; i < 5; i++)
//{
//	for(int j = 0; j < 5; j++)
//	{
//		
//	   	if( a[i] == b[j] )
//	   { 
//		printf("\n%d are Common in Numbers\n",a[i]);
//	   }
//		
//	}
//	
//}



//Q-11 Find UNCOMMON NUMBERS in the inputs from the array !!? 




//int a[5],b[5],c=0;
//
//printf("Enter no.\n");
//
//for(int i = 0; i < 5; i++) // entering 5 digits for first array
//{
//	scanf("%d",&a[i]);
//}
//printf("\n");
//for(int i = 0; i < 5; i++) //here, entering 5 digits for second array 
//{
//	scanf("%d",&b[i]);
//}
//printf("\n");
//
////loop will Run for a[array] for finding uncommon no. from a[i] to b[i]..!!
//
//for(int i = 0; i < 5; i++) 
//{
//	c=0; // here, again c = 0 because we have see second arrays digits 5 times     
//	for(int j = 0; j < 5; j++)
//	{
//		if ( a[i] == b[j]) //here, if common number condition is true so find same number in first array from second array
//		c = c+1;
//	}
//	if(c == 0) 
//	{
//		printf("%d\n",a[i]); //it will print first array's uncommon number ...!!
//	}
//}
////same above loop will Run for b[array] for finding uncommon no. from b[i] to a[i]..!!
//for(int i = 0; i < 5; i++)
//{
//	c=0;
//	for(int j = 0; j < 5; j++)
//	{
//		if ( b[i] == a[j])//here, if common number condition is true so find same number in second array from first array
//		c = c+1;
//	}
//	if(c == 0)
//	{
//		printf("%d\n",b[i]);//it will print second array's uncommon number ...!!	
//	}
//}





//Q-12 Enter digits in Both the Array's and Sum last & First digit array of A & B ..!!??



//
//int a[5],b[5],c;
//
//printf("Enter No.\n");
//
//for(int i = 0; i < 5; i++)
//{
//	scanf("%d",&a[i]);
//}
//printf("\n");
//for(int i = 0; i < 5; i++)
//{
//	scanf("%d",&b[i]);
//}
//
//for(int i = 0; i < 5; i++) // here,i=0
//{
//   c = a[i] + b[4-i];  // a[i] = 10 + b[4-0]  i.e b[4] = 5
//	printf("\n%d",c); // c = 10+5=15;
//}



//Q-13 Add first & last/second & fourth/third & third in the inputs from the array !!? 


//
//int a[5],c,sum=0;
//
//printf("Enter number:\n");
//
//for( int i = 0; i < 5; i++)
//{
//	scanf("%d",&a[i]);
//}
//printf("\n");
//
//for( int i = 0; i < 5; i++)
//{
//	c=a[i] + a[4-i];
//	printf("%d \n",c);
//	sum=sum+c;
//}	
//printf("\n");
//printf("%d",sum);



//Q-14 Put An Array input in Size Variable and find maximum,minimum & sum of the array !!? 



//int Size,sum=0,i,max=0,b,min=10;
//printf("Size:");
//scanf("%d",&Size);
//
//int a[Size];
//
//for(int i = 0; i < Size; i++) 
//{
//	scanf("%d",&a[i]);
//}
//for(int i = 0; i < Size; i++)
//{
//	sum = sum + a[i];
//}
//printf("Sum of the Array:-%d\n",sum);
//
//max = a[i];
//for(int i = 0; i < Size; i++)
//{
//	if( a[i] > max )
//	{
//		max = a[i];
//	}
//}
//	printf("Maximum Digit in an Array %d\n",max);
//
//min = a[i];
//for(int i = 0; i < Size; i++)
//{
//	if( a[i] < min )
//	{
//		min = a[i];
//	}
//}
//	printf("Minimum Digit in an Array %d",min);
//


//Q-15 Take Two Arrays and Add Both in 3rd Array!!??

//
//int size;
//
//printf("Enter Size of Array:");
//scanf("%d",&size);
//
//int a[size],b[size],c[size];
//
//printf("Enter no:-\n");
//for(int i = 0; i < size; i++)
//{
//	scanf("%d",&a[i]);
//}
//printf("\n");
// 
//for(int i = 0; i < size; i++)
//{
//	scanf("%d",&b[i]);
//}
//printf("\n");
//for(int i = 0; i < size; i++)
//{
//	c[i] = a[i] + b[i];
//	printf("%d\n",c[i]);
//}





//Q-16 Take Two Arrays and Merge Both in 3rd Array!!??




//int size;
//
//printf("Enter Size of Array:");
//scanf("%d",&size);
//
//int a[size],b[size],c[size];
//
//printf("Enter no:-\n");
//for(int i = 0; i < size; i++)
//{
//	scanf("%d",&a[i]);
//}
//printf("\n");
//
//for(int i = 0; i < size; i++)
//{
//	scanf("%d",&b[i]);
//}
//printf("\n");
//
//for(int i = 0; i < 5; i++)
//{
//   c[i]=a[i];
//   printf("%d",c[i]);
//}
//
//for(int i = 5; i < 10; i++)
//{
//   c[i]=b[i-5];
//   printf("%d",c[i]);
//}



//Q-17 Search no. is Exist or Not!!?




//int a[5],n,i;
//int c = 0;
//
//printf("Enter No:-\n");
//for( i = 0; i < 5; i++)
//{
//	scanf("%d",&a[i]);
//}
//
//printf("Search No is Exist or Not:-");
//scanf("%d",&n);
//
//for(i = 0; i < 5; i++)
//{
//	if( a[i] == n )
//    {
//	c = c + 1;
//	printf("\n%d is Exist in an array",n);
//	}	
//}	
//
//  
//if ( c == 0)
//{
//	printf("Not Found");
//}




//Q-18 Find the no. is in Which Index of Array!!??




//int a[5],i,c=0,n;
//
//printf("Enter no:\n");
//
//for( i = 0; i < 5; i++)
//{
//	scanf("%d",&a[i]);
//}
//
//printf("Find the no. in which index of Array:- ");
//scanf("%d",&n);
//
//for( i = 0; i < 5; i++)
//{
//  if( a[i] == n )
//  {
//  	c = c + 1;
//  	printf("%d in Index of Array",i);
//  }
//} 
//
//if ( c == 0 )
// {
// 	printf("Not Found");
// }



//Q-19 Which Two Adjacent Numbers Add Up to Make the target number??



//int size; 
//
//printf("Enter no. of digits to show in array:-");
//scanf("%d",&size); //size is to give how many digits wants to enter..!!
//
//int a[size],i,j,n,c=0;
//
//printf("Enter no:-\n"); 
//
//for(int i = 0; i < size; i++)
//{
//	scanf("%d",&a[i]);  //here,entering numbers
//}
//printf("Enter Target Number:- "); //30
//scanf("%d",&n); //enter no to find how many adjacent number's [Sum of 2 digits] are their in an array!! 
//
//for(i = 0; i < size-1; i++) 
//{
//	for( j = i+1; j < size; j++)
//	{
//		if( a[i] + a[j] == n ) // 10+20=30
//		{
//			printf("\nThese are Adjacent's of Target Number\n");
//			printf("%d\n%d\n",a[i],a[j]); //10,20
//			c=c+1;
//		}
//		
//	}
//     	
// }
//     if( c==0 ) 
//        {
//    	printf("No Adjacent Number Found");
//        } 

 
 
 
//Q-20 take two array and merge them line by line to 3rd array Simultaneously..!!
 
 
 
// 
//int a[5],b[5],c[10],k,m,l;
//
//printf("Enter First array no:-\n");
//for(int i = 0; i < 5; i++)
//{
//	scanf("%d",&a[i]);
//} 
//printf("\n");
//
//printf("Enter Second array no:-\n");
//for(int i = 0; i < 5; i++)
//{
//	scanf("%d",&b[i]);
//} 
//printf("\n");
//
//k=0;
//for(int i = 0; i < 5; i++)
//{
//   c[k] = a[i];
//   k = k + 2;
//}
//m=1;
//for(int j = 0;j < 5; j++)
//{
//	c[m] = b[j];
//	m = m + 2;
//}
//for(int l = 0; l < 10; l++)
//{
//	printf("%d\n",c[l]);
//}
 
 
 
 
//Q-21 Subtraction of even and odd..!! 
 
 
 
 
//int a[10],c=0,d,e,f;
//
//printf("Enter no:-\n");
//
//for(int i = 0; i < 9; i++)
//{
//	scanf("%d",&a[i]);
//}
//
//for(int i = 0; i < 9; i++)
//{
//
//if(a[i]%2==0)
//{
//	c = c + 1;
//}
//}
// printf("Even Numbers are =>%d",c);
// e=c;
//
//c=0;
//printf("\n");
//for(int i = 0; i < 9; i++)
//{
//
//if(a[i]%2!=0)
//{
//	c = c + 1;
//}
//}
//printf("Odd Numbers are =>%d",c);
//f=c;
//printf("\n");
//
//d=e-f;
//printf("Subtracion of Even & Odd Number=%d",d);



//Q-22 put size=3, and sum them !!


//int a[7]={10,2,3,7,8,9,30};
//
//int size,c=0;
//printf("Enter Size:-");
//scanf("%d",&size);
//
//
//for(int i = 0 ; i < 7; i=i++)
//{
//     if ( a[i]%size==2)
//	
//	 c = c + a[i];
//}
//  	 printf("%d\n",c);







 
//End Main	
}
