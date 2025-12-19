//#include<stdio.h>
//
//int main(){
//	
////Q-1 sort array in ascending 	
//	
//int size;
//
//printf("Enter-size:-");	
//scanf("%d",&size);
//
//int a[size],swap;
//for(int i = 0; i < 5; i++)
//{
//scanf("%d",&a[i]);
//}
//printf("\n");
//
//for(int i = 0; i < size - 1; i++)
//{
//for(int j = i + 1; j < size; j++)
//  { 
//	if( a[i] > a[j] )
//	{
//		swap = a[i];
//		a[i] = a[j];
//		a[j] = swap;
//	}
//  }
////	printf("%d",swap);		
//}
//for(int i = 0; i < 5; i++)
//{
//	printf("%d",a[i]);
//}



//Q-2 sort array in Descending order..!!!



//int size;
//
//printf("Enter-size:-");	
//scanf("%d",&size);
//
//int a[size],swap;
//for(int i = 0; i < 5; i++)
//{
7//scanf("%d",&a[i]);
//}
//printf("\n");
//
//for(int i = 0; i < size - 1; i++)
//{
//for(int j = i + 1; j < size; j++)
//  { 
//	if( a[i] < a[j] )
//	{
//		swap = a[i];
//		a[i] = a[j];
//		a[j] = swap;
//	}
//  }
////	printf("%d",sw);		
//}
//for(int i = 0; i < 5; i++)
//{
//	printf("%d\n",a[i]);
//}




//Q-3 sort array half ascending and half descending..!!




//int size;
//
//printf("Enter-size:-");	
//scanf("%d",&size);
//
//int a[size],swap;
//for(int i = 0; i < 10; i++)
//{
//scanf("%d",&a[i]);
//}
//printf("\n");
//
//for(int i = 0; i < size/2; i++)
//{
//for(int j = i + 1; j < size/2; j++)
//  { 
//	if( a[i] > a[j] )
//	{
//		swap = a[i];
//		a[i] = a[j];
//		a[j] = swap;
//	}
//  }
//}
//for(int i = size/2; i < size; i++)
//{
//for(int j = i + 1; j < size/2; j++)
//  { 
//	if( a[i] < a[j] )
//	{
//		swap = a[i];
//		a[i] = a[j];
//		a[j] = swap;
//	}
//  }
//		
//}
//for(int i = 0; i < 10; i++)
//{
//	printf("%d",a[i]);
//}




//Q-4  2nd kth largest!!???



//int size;
//
//printf("Enter-size:-");	
//scanf("%d",&size);
//
//int a[size],swap,k;
//for(int i = 0; i < 5; i++)
//{
//scanf("%d",&a[i]);
//}
//printf("\n");
//
//for(int i = 0; i < size - 1; i++)
//{
//for(int j = i + 1; j < size; j++)
//  { 
//	if( a[i] > a[j] )
//	{
//		swap = a[i];
//		a[i] = a[j];
//		a[j] = swap;
//	}
//  }
////  printf("%d",swap);
//}
//
//for(int i = 0; i < 5; i++)
//{
//	printf("%d\n",a[i]);
//}
//
//printf("Enter Target Number:-");
//scanf("%d",&k);
//
//	printf("k'th Largest no.:-%d",a[size-k]);
//
//
//





//Q-6 Find Repeat & Missing No. !!!?



//int a[5];
//
//for(int i = 0; i < 5; i++)
//{
//scanf("%d",&a[i]);
//}
//printf("\n");
//
//for(int i = 0; i < 5; i++)
//{
//	
//if ( a[i+1] - a[i] == 0 )
//{
//  printf("%d is a Repeat Number",a[i]);
//}
//
//else if ( a[i+1] - a[i] == 2 )
//{
//  printf("\n%d is a Missing Number",a[i]+1);	
//} 
//
//}



//Q-7  Show ascending order by its first digit..!!



//int a[5],b,swap;
//
//for(int i = 0; i < 5; i++)
//{
//scanf("%d",&a[i]);
//}
//printf("\n");
//
//for(int i = 0; i < 5; i++)
//{
// 
// b=a[i]%10;
// a[i]=a[i]/10;
// 
//// printf("%d\n",a[i]);
//
//for(int j = 0; j < 5; j++)
//  { 
//	if( a[i] > a[j] )
//	{
//		swap = a[i];
//		a[i] = a[j];
//		a[j] = swap;
//	}
//  }
//  printf("%d\n",a[i]);
//}

//Q-4 show the first digit in ascending order in an array..!!



//int a[5]={1000,23,83,153,37},i,j,n,m,b,c,t;
//
//
//for(int i = 0; i < 4; i++)
//{
//for(int j = i+1; j < 5; j++)
//  { 
//    n=a[i];
//    m=a[j];
//    
//    while(n!=0)
//    {
//    	b=n%10;
//    	n=n/10;
//	}
//	while(m!=0)
//	{
//		c=m%10;
//		m=m/10;
//	}
//	
//	if( b > c )
//	{
//		t=a[i];
//		a[i]=a[j];
//		a[j]=t;
//	}
//  }
////  printf("%d\n",a[i]);
//printf("\n");
//}
//for(int i = 0; i < 5; i++)
//{
//	printf("%d\n",a[i]);
//}


//EndofMain	
}
