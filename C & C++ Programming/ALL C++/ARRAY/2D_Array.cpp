#include<stdio.h>

int main(){


//int a[3][2],i,j;
//
//printf("Enter no.\n");
//
//for( i = 0; i < 3; i++)
//{
//	for( j = 0; j < 2; j++)
//	{
//	printf("%d",a[i][j]);
//	}
//printf("\n");
//}



//Q-1 show matrix of array only by column ..!!!



//int a[3][3],i,j;
//
//printf("Enter No.\n");
//
//for(i = 0;i < 3; i++)
//{
//	for( j = 0;j < 3; j++)
//{
//  scanf("%d",&a[i][j]);	
//}
//
//}	
//printf("\n");
//for(i = 0;i < 3; i++)
//{
//	for( j = 0;j < 3; j++)
//{
//  printf("%d",a[j][i]);	
//}
//printf("\n");
//
//}




//Q-2 find Sum of a Diagonal in matrix of array ..!!!




//int a[3][3],i,j,s1=0,s2=0;
//
//printf("Enter no:-\n");
//for( i = 0; i < 3; i++)
//{
//	for( j = 0; j < 3;j++)
//	{
//		scanf("%d",&a[i][j]);
//	}
//}
//printf("\n");
//
// s1=0;
//   s2=0;
//for( i = 0; i < 3; i++)
//{ 
//	for( j = 0; j < 3;j++)
//	{
//        if ( i == j )
//      {
//      	s1=s1+a[i][j];
//      	printf("%d\n",a[i][j]);
//	  }
//	  if ( i + j == 2 )
//      {
//      	s2=s2+a[i][j];
//		printf("%d\n",a[i][j]);
//	  }
//     
//	}
//	      		
//printf("\n");
//
//}
//	   printf("s1=>%d\n",s1);
//      printf("s2=>%d\n",s2);	  
	
	

//Q-3 Addition of Two Matrices..!!!



//int a[3][3],b[3][3],c[3][3],i,j;
//
//printf("Enter matrices:-\n");
//for( i = 0; i < 3; i++)
//{
//	for( j = 0; j < 3;j++)
//	{
//		scanf("%d",&a[i][j]);
//	}
//}
//printf("\n");
//
//for( i = 0; i < 3; i++)
//{
//	for( j = 0; j < 3;j++)
//	{
//		scanf("%d",&b[i][j]);
//	}
//}
//
//printf("\n");
//for( i = 0; i < 3; i++)
//{
//	for( j = 0; j < 3;j++)
//	{
//	  c[i][j] = a[i][j] + b[i][j];	
//		printf("%d\n",c[i][j]);
//	}
//	printf("\n");
//}




//Q-5 Sum of one matrix by Row..!!



//int a[3][3],i,j,sum;
//
//printf("Enter no:-\n");
//for( i = 0; i < 3; i++)
//{
//  for( j = 0; j < 3; j++ )
//	{
//	scanf("%d",&a[i][j]);
//    }
//}
//printf("\n");
//
//for( i = 0; i < 3; i++)
//{
//sum=0;	
//  for( j = 0; j < 3; j++ )
//	{
//	 sum = sum + a[i][j];	
// }
//printf("Sum of Row of a Matrix of an Array:-%d ",sum);
//printf("\n");		
//}




//Q-6 Sum of one matrix by Column..!!

	
	
//int a[3][3],i,j,sum;
//
//printf("Enter no:-\n");
//for( i = 0; i < 3; i++)
//{
//  for( j = 0; j < 3; j++ )
//	{
//	scanf("%d",&a[i][j]);
//    }
//}
//printf("\n");
//
//for( i = 0; i < 3; i++)
//{
//sum=0;	
//  for( j = 0; j < 3; j++ )
//	{
//	 sum = sum + a[j][i];	
//    }
//printf("Sum of Column of a matrix of an Array:- %d",sum);
//printf("\n");		
//}



//Q-7 Find Largest no. in Every Row of a 2D Array..!!??



//int a[3][3]={1,4,7,3,5,7,9,3,2},i,j;
//int largest,rowloc,columnloc;
//
//largest = a[0][0];
//for(i = 0; i < 3; i++)
//{
//	for( j = 0; j < 3; j++)
//	{
//		if(largest<a[i][j])
//		{
//			largest=a[i][j];
//			rowloc=i;
//			columnloc=j;
//		}
//	}
//	printf("\n");
//	printf("largest in a Row of Array:-%d\n in location of a[%d][%d]\n",largest,rowloc,columnloc);
//}



//Q-7 Find one[1] in Every Row of a 2D Array if find then print yes else no..!!??




int a[3][3]={1,4,7,3,1,7,9,3,1},i,j,c;

for(i = 0; i < 3; i++)
{
    c=0;
	for( j = 0; j < 3; j++)
	{
		if( a[i][j] == 1 )
		{
			c = c + 1;
			printf("%dyes",c);
			printf("%d%d",i,j);
		}
		printf("\n");
		if( c == 0)
		{
			printf("%dno",c);
			printf("%d%d",i,j);
		}
	}
	printf("\n");
}





	
//EndOfMain	
}
