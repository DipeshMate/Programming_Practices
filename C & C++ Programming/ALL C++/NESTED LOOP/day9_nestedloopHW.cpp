#include<stdio.h>

int main(){

//question:1      1
//                12
//                123
//                1234
//                12345

//for(int i=1;i<=5;i++) {
//	for(int j=1;j<=i;j++) {
//		printf("%d",j);
//}
//printf("\n");
//}

//question:2	  1
//                21
//                321
//                4321
//                54321

//for(int i=1;i<=5;i++) {
//	for(int j=i;j>=1;j--) {
//
//	printf("%d",j);
//
//}
//  printf("\n");
//
//}

//question:3	  12345
//                2345
//                345
//                45
//                5

//for(int i=1;i<=5;i++) {
//	for(int j=i;j<=5;j++) {
//		printf("%d",j);
//}
//printf("\n");
//}

//question:4	  54321
//                5432
//                543
//                54
//                5

//for(int i=5;i>1;i--) {
//	for(int j=5;j>=1;j--) {
//		printf("%d",j);
//}
//		printf("\n");
//
//}

//question:5      5
//                54
//                543
//                5432
//                54321

//for(int i=5;i>=1;i--){
//	for(int j=5;j>=i;j--)
//	{
//		printf("%d",j);
//	}
//	printf("\n");
//}

//question:6      5
//                45
//                345
//                2345
//                12345

//for(int i=5;i>=1;i--){
//	for(int j=i;j<=5;j++){
//		printf("%d",j);
//	}
//	printf("\n");
//}


//question:7      54321
//                4321
//                321
//                21
//                1

//for(int i=5;i>=1;i--){
//	for(int j=i;j>=1;j--){
//	
//	printf("%d",j);
//	}
//	printf("\n");
//}


//question:8      12345
//                1234
//                123
//                12
//                1

//for(int i=5;i>=1;i--){
//	for(int j=1;j<=i;j++){
//		printf("%d",j);	
//	}
//	printf("\n");	
//}


//question:9      1
//                10
//                101
//                1010
//                10101

//for(int i=1;i<=5;i++) {
//	for(int j=1;j<=i;j++) {
//		printf("%d",j%2);
//}
//printf("\n");
//}

//question:10     1
//                01
//                101
//                0101
//                10101

//for(int i=5;i>=1;i--) {
//	for(int j=i;j<=5;j++) {
//		printf("%d",j%2);
//}
//printf("\n");
//}

//----another method=----

//question:10     1
//                10
//                101
//                1010
//                10101
//
//for(int i=1 ;i<=5;i++) {
//	for(int j=i;j>=1;j--) {
//		printf("%d",j%2);
//}
//printf("\n");
//}

//question:11     1
//                23
//                456
//                78910
              
//int c=1;
//for(int i=1;i<=4;i++) {
//	for(int j=1;j<=i;j++) {
//		printf("%d",c);
//		c++;
//	}
//	printf("\n");
//}

//question:12     10
//                98
//                765
//                4321

//int c=10;
//for(int i=1;i<=4;i++) {
//	for(int j=1;j<=i;j++) {
//   printf("%d",c);
//   c--;
//}
//printf("\n");
//}

//question:13     2
//                46
//                81012
//                14161820

//int c=2;
//for(int i=1;i<=4;i++) {
//	for(int j=1;j<=i;j++) {
//		printf("%d",c);
//		c=c+2;
//}
//printf("\n");
//}

//question:14     1
//                22
//                333
//                4444
//                55555

//for(int i=1;i<=5;i++) {
//	for(int j=1;j<=i;j++) {
//		printf("%d",i);
//}
//printf("\n");
//}

//question:15     55555
//                4444
//                333
//                22
//                1

//for(int i=5;i>=1;i--) {
//	for(int j=1;j<=i;j++) {
//		printf("%d",i);
//}
//printf("\n");
//}

//question:16     5
//                44
//                333
//                2222
//                11111

//for(int i=5;i>=1;i--) {
//	for(int j=5;j>=i;j--) {
//		printf("%d",i);
//}
//printf("\n");
//}


//question:17     *
//                **
//                ***
//                ****
//                *****

//for(int i=1;i<=5;i++) {
//	for(int j=1;j<=i;j++) {
//		printf("*");
//}
//printf("\n");
//}

//question:18     *****
//                ****
//                ***
//                **
//                *

//for(int i=5;i>=1;i--) {
//	for(int j=1;j<=i;j++) {
//		printf("*");
//}
//printf("\n");
//}

//---------SPACE METHOD EXTRA LOOP--------

//question:19         *
//                   **
//                  ***
//                 ****
//                *****
//
//int rows;
//printf("no. of rows:");
//scanf("%d",&rows);
//
//for(int i=1;i<=rows;i++) {
//   for(int j=1;j<=rows;j++) {
//       
//       if((i+j)<=rows)
//          printf(" ");
//	else
//	     printf("*");     
//}
//     printf("\n");
//
//}

//question:20         *
//                   * *
//                  * * *
//                 * * * *
//                * * * * *

//int rows;
//printf("no. of rows:");
//scanf("%d",&rows);
//
//for(int i=1;i<=5;i++) {
//   for(int space=1;space<=(rows-i);space++) {
//
//      printf(" ");
//}
//   for(int j=1;j<=i;j++) {
//
//     printf("* ");
//}
//     printf("\n");
//
//}


return 0;	
}
