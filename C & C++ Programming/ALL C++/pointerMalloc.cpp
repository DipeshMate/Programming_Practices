#include<stdio.h>
#include<malloc.h>


//malloc dynamic memory allocation 
//#malloc-------calloc-----free

//  DATATYPE *pr = (DATATYPE*) MALLOC(SIZEOF(DATATYPE))

//main()
//{
//
//int *p = (int*) malloc(sizeof(int));
//
//printf("Enter no");
//scanf("%d",p);
//
//if(*p%2==0)
//{
//printf("%d is Even no",*p);
//}
//else
//printf("%d is Odd no",*p);	
//
//free(p);	
//}


// Greater number..!!!  



//
//main()
//{
//
//int *p = (int*) malloc(sizeof(int));
//int *q = (int*) malloc(sizeof(int));
//int *r = (int*) malloc(sizeof(int));
//
//printf("Enter no.");
//scanf("%d%d%d",p,q,r);
//
//if( *p>=*q && *p>=*r)
//{
//printf("a is greater");	
//}
//if( *q>=*r && *q>=*p)
//{
//	printf("b is greater");
//}
//if( *r>=*p && *r>=*q )
//{
//	printf("c is greater");
//}
//
//free(p);
//free(q);
//free(r);
//}



//greater no. 


//main()
//{
//	
//int *p = (int*) malloc(sizeof(int)*5);
//int max = 0;	
//
//
//for(int i=0;i<5;i++)
//{
//	scanf("%d",p+i);
//}
//
//for(int i=0;i<5;i++)
//{
// if( max<*(p+i))
// {
// 	max=*(p+i);
// 	printf("\n");
//
// }	
//}
//  printf("%d is greater",max);
//
//free(p);
//
//}


// minimum no.



//main()
//{
//	int *p = (int*) malloc(sizeof(int)*5);
//	int min;
//
//min=*(p+0);
//
//for(int i=0;i<5;i++)
//{
//	scanf("%d",p+i);
//}
//
//for(int i=0;i<5;i++)
//{
// if( min>*(p+i))
// {
// 	min=*(p+i);
// 	printf("\n");
//
// }	
//}
//  printf("%d is minimum",min);	
//	
// free(p);
//}


// sum...!!!

//main()
//{
//
// int *p = (int*) malloc(sizeof(int)*5);
//int b,sum=0;
//
//for(int i=0;i<5;i++)
//{
//	scanf("%d",p+i);
//}
//
//for(int i=0;i<5;i++)
//{
// sum=sum+*(p+i); 
//}
//printf("sum is:-%d",sum);
//	
//free(p);	
//}






