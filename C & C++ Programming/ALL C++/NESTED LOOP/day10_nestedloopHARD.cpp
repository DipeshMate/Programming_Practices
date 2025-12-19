#include<stdio.h>

int main() {
	
//int rows;
//printf("Entry no. of rows:");
//scanf("%d",&rows);
//
//for(int i=1;i<=rows;i++){
//	for(int j=1;j<=rows;j++) {
//    
//    if((i+j)<=rows)
//    {
//    	printf(" ");
//	}
//	else {
//		printf("*");
//	}
//
//}
//printf("\n");
//}	

//question:1      1
//                00
//                111
//                0000
//                11111	
	
//for(int i=1;i<=5;i++) {
//	for(int j=1;j<=i;j++) {
//		printf("%d",i%2);
//}
//printf("\n");
//}

//question:2      1
//                123
//                12345
//                1234567
//                123456789

//for(int i=1;i<=5;i++) {
//	for(int j=1;j<=2*i-1;j++) {
//		printf("%d",j);
//}
//printf("\n");
//}	

//question:3      123456789
//                1234567
//                12345
//                123
//                1

//for(int i=5;i>=1;i--) {
//	for(int j=1;j<=i*2-1;j++) {
//		printf("%d",j);
//}
//printf("\n");
//}

//question:4      1
//                23
//                345
//                4567
//                56789

//for(int i=1;i<=5;i++) {
//	for(int j=i;j<=i*2-1;j++) {
//		printf("%d",j);
//}
//printf("\n");
//}

//---ANOTHER METHOD-----

//int c;
//for(int i=1;i<=5;i++) {
//	c=i;
//	for(int j=1;j<=i;j++) {
//	     
//	printf("%d",c);
//    c=c+1;
//}
//
//printf("\n");
//}

//question:5      1
//                23
//                346
//                45710
//                5681115

//int c;
//for(int i=1;i<=5;i++) {
//	c=i;
//	for(int j=1;j<=i;j++) {
//	     
//	printf("%d",c);
//    c=c+j;
//}
//
//printf("\n");
//}

//----ANOTHER METHOD trying not completed----

//for(int i=1;i<=5;i++){
//	for(int j=1;j<=5;j++) {
//    
//    if((i+j)<=rows)
//    {
//    	printf(" ");
//	}
//	else {
//		printf("*");
//	}
//
//}
//printf("\n");
//}

//question:6      1234554321
//                1234554321
//                1234554321
//                45710
//                5681115


//for(int i=1;i<=3;i++) {
//	for(int j=1;j<=5;j++) {
//	     
//	printf("%d",j);
//  }
//   
//  for(int j=5;j>=1;j--) {
//  	printf("%d",j);
//}
//
//printf("\n");
//}

//question:7      1
//                121
//                12321
//                1234321
//                123454321


//for(int i=1;i<=5;i++) {
//	for(int j=1;j<=i;j++) {
//     
//	printf("%d",j);
//  }
//  for(int j=i-1;j>=1;j--) {
//  	printf("%d",j);
//}
//
//printf("\n");
//}

//question:8          1
//                   21
//                  321
//                 4321
//                54321

//for(int i=1;i<=5;i++) {
//	for(int j=5;j>=1;j--) {
//		if((j-i)>=1)
//		{
//			printf(" ");
//		}
//	else {
//            printf("%d",j);	 	
//	    } 
//}
//printf("\n");
//}

//----------ANOTHER-METOD-------

//for(int i=1;i<=5;i=i+1){
//	
//	for (int j=4;j>=i;j=j-1){
//		printf(" ");
//	}
//	for(int j=i;j>=1;j=j-1){
//		printf("%d",j);
//	}
//	printf("\n");
//}


//question:9          1
//                   121
//                  12321
//                 1234321
//                123454321


//for(int i=1;i<=5;i=i+1){
//	for(int j=4;j>=i;j=j-1) {
//		printf(" ");
//	}
//	for(int j=1;j<=i;j++) {
//		printf("%d",j);
//    }
//    for(int j=i-1;j>=1;j=j-1) {
//        printf("%d",j);
//    }
//
//printf("\n");
//}

//question:10         1
//                   1 2
//                  1 2 3
//                 1 2 3 4
//                1 2 3 4 5

//for(int i=1;i<=5;i=i+1){
//	for(int j=4;j>=i;j=j-1) {
//		printf(" ");
//	}
//	for(int j=1;j<=i;j++) {
//		printf("%d ",j);
//    }
//
//printf("\n");
//}

return 0;	
}
