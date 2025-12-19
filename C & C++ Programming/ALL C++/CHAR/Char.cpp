//char take 1 byte -128 to 127 / 0 to 255 which takes all keyboard values and it takes single apostrophe
//%c for display
//A-Z = 65-90
//a-z = 97-122 
//0-9 = 48-57

#include<stdio.h>

main(){

//char c='A';
//printf("%c %d",c,c); // A 65



//Q_1 find alphabet is vowel or consonent !?




//char c;
//
//printf("Enter no.");
//scanf("%c",&c);
//
//if(c=='A'|| c=='E'||c=='I'||c=='O'||c=='U'||c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
//{
//	printf("%c is Vowels",c);
//}
//else
//{
//	printf("%c is Consonent",c);
//}



//Q_2 Enter value and find the value is uppercase or lowercase..!!??



//char c;
//printf("Enter any value:");
//scanf("%c",&c);
//
//if(c>=65 && c<=90)
//{
//	printf("%c is UpperCase",c);
//}
//else if(c>=97 && c<=122)
//{
//	printf("%c is LowerCase",c);
//}
//else if(c>=48 && c<=57)
//{
//	printf("%c is number",c);
//}
//else
//{
//	printf("Special Symbol",c);
//}




//Q_3 swap values..!!



//char c;
//printf("Enter value:");
//scanf("%c",&c);
//
//
//if(c >= 65 && c <= 90)
//{
//	c = c + 32;
//	printf("%c",c);
//}
//else if(c >= 97 && c <= 122)
//{
//	c = c - 32;
//	printf("%c",c);
//}




//Q-01  A
//      AB
//	    ABC
//	    ABCD
//	    ABCDE 




//for(char i = 'A';i <= 'E'; i++)
//{
//	for(char j = 'A';j <= i ; j++ )
//	{
//		printf("%c",j);
//	}
//	printf("\n");
//}



//Q-02  A
//      BA
//	    CBA
//	    DCBA
//	    EDCBA 



//for(char i = 'A';i <= 'E'; i++)
//{
//	for(char j = i ;j >= 'A' ; j-- )
//	{
//		printf("%c",j);
//	}
//	printf("\n");
//}




//Q-03  ABCDE
//      ABCD
//	    ABC
//	    AB
//	    A 



//for(char i = 'E';i >= 'A' ; i--)
//{
//	for(char j = 'A' ;j <= i ; j++ )
//	{
//		printf("%c",j);
//	}
//	printf("\n");
//}




//Q-04  A
//      ABA
//	    ABCBA
//	    ABCDCBA
//	    ABCDEDCBA



//for(char i = 'A' ; i <= 'E' ; i++)
//{
//	for(char j = 'A' ; j <= i ; j++ )
//	{
//		printf("%c",j);
//	}
//	
//	for(char j = i-1 ; j >= 'A' ; j-- )
//	{
//		printf("%c",j);
//	}
//	
//	printf("\n");
//}



//Q-05      A
//         AB
//	      ABC
//	     ABCD
//	    ABCDE




//for(char i = 'A' ; i <= 'E' ; i++)
//{
//	for(char j = 'E' ; j > i ; j--)
//	{
//		printf("%c"," ");
//	}
//	
//	for(char j = 'A' ; j <= i ; j++)
//	{
//		printf("%c",j);
//	}
//	
//	printf("\n");
//}



//Q-06      ABCDEEDCBA
//          ABCD  DCBA
//	        ABC    CBA
//	        AB      BA
//	        A        A



//int m,n=0;
//
//for(char i = 'E'; i >= 'A'; i--)
//{
//	for(char j = 'A'; j <= i; j++)
//	{
//		printf("%c",j);
//	}
//    
//   for(int m = 1 ; m <= n ; m++)
//	{
//		printf("%c"," ");
//	}
//	n = n + 2;
//	
//    for(char j = i; j >= 'A' ;j--)
//	{
//	printf("%c",j);	
//	}
//    printf("\n");
//}

 
//end point
}
