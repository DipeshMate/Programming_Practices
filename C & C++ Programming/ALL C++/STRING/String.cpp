#include<stdio.h>
#include<string.h>

main()
{


//char c[30];
//
//printf("Enter String:-");
//scanf("%s",&c);
//
//printf("%s",c);



//char c[30];
//
//printf("Enter No:-");
//scanf("%s",&c);
//
//for(int i = 0; c[i] != '\0';i++)
//{
//	printf("%c \n",c[i]);
//}

//Q-3 vowels count..!!



//char c[10];
//int d=0,i;
//
//printf("Enter Name:-");
//scanf("%s",&c);
//
//for( i = 0; c[i] != '\0'; i++)
//  {	
//	if( c[i]=='a' || c[i]=='e' || c[i]=='i' || c[i]=='o' || c[i]=='u' )
//	{
//	 d = d+1;
//	}
//  
//  }
//	printf("%d",d);


//Q-4 swap alphabets


//char c[10];
//printf("Enter Name:\n");
//scanf("%s",&c);
//
//for(int i = 0; c[i] != '\0'; i++ )
//{
//
//   if(c[i] >= 65 && c[i] <= 90)
//  {
//	c[i] = c[i] + 32;
//	printf("%c",c[i]);
//  } 
//else if(c[i] >= 97 && c[i] <= 122)
//{
//	c[i] = c[i] - 32;
//	printf("%c",c[i]);
//}
//
//}



//Q-5 count upper & lower aplha..!!!



//char c[30];
//int d=0,e=0,i;
//
//printf("Enter Name:-\n");
//scanf("%s",&c);
//
//for( i = 0; c[i] != '\0'; i++) 
//{
//
//if( c[i] >= 65 && c[i] <= 90)
//{
//   c[i] = c[i] + 32;
//   d = d + 1;
//}
//
//else if ( c[i] >= 97 && c[i] <= 122 )
//{
//	c[i] = c[i] - 32;
//	e = e + 1;
//}
//
//}
//
//      printf("upper no.%d \n",d);
//      printf("lower no.%d \n",e);



//Q-6 length count !!?/


//char c[30],i;
//int l=0;
//
//printf("Enter name:-\n");
//scanf("%s",&c);
//
//for ( i = 0; c[i] != '\0'; i = i + 1 )
//{
//   l = l + 1;
//}
// printf("Length of name=> %d",l);




//Q-7 reverse print..!!


//
//char c[30];
//int i,l=0;
//
//printf("Enter name to print reverse of name:-\n");
//scanf("%s",&c);
//
//for( i = 0; c[i] != '\0'; i++ )
//{
//l = l + 1;
//}
////printf("%d",l); here, L = 5
//for ( i = l - 1; i >= 0; i--)
//{
//	printf("%c",c[i]);
//} 



//Q-8 No Vowels find..!!??



//char c[30];
//
//printf("enter name:-\n");
//scanf("%s",&c);
//
//
//for(int i = 0; c[i] != '\0'; i++ )
//{
//	if ( c[i]=='A' || c[i]=='E' || c[i]=='I' || c[i]=='O' || c[i]=='U' || c[i]=='a' || c[i]=='e' || c[i]=='i' || c[i]=='o' || c[i]=='u' )
//	{
//	printf("");
//	}
//	else {
//		printf("%c",c[i]);
//	   }
//
//}
//	printf("\nNo Vowels found");



//Q-9 maximum letter..!!


//char c[20],i,m;
//printf("Enter String:-");
//scanf("%s",&c);
//
//m=c[20];
//
//for( i = 0; c[i] != '\0'; i++)
//{
//	if(c[i]>m)
//	{
//		m=c[i];
//	}
//}
//printf("%c",m);


//Q-10 string replace vowels with next element..


//char c[30],i;
//printf("enter name:-\n");
//scanf("%s",&c);
//
//
//for(int i = 0; c[i] != '\0'; i++ )
//{
//	if ( c[i]=='A' || c[i]=='E' || c[i]=='I' || c[i]=='O' || c[i]=='U' || c[i]=='a' || c[i]=='e' || c[i]=='i' || c[i]=='o' || c[i]=='u' )
//	{
//	c[i]=c[i] + 1;
//	}
//	printf("%c",c[i]);
//}


//Q-11 string where vowels print alphabet 'B'..


//char c[20],i;
//
//printf("Enter String:-");
//scanf("%s",&c);
//
//for( i = 0; c[i] != '\0'; i = i + 1)
//{
//	if( c[i] == 'a' || c[i] == 'e' || c[i] == 'i' || c[i] == 'o' || c[i] == 'u' )
//	{
//		c[i]='B';
//	}
//	printf("%c",c[i]);
//}


//Q-12 Name reverse...!!


//char c[30];
//int i, l = 0;
//
//printf("Enter name:- ");
//scanf("%s",&c);
//
//for( i = 0; c[i] != '\0'; i = i + 1){
//	l = l + 1;
//} 
////printf("%d",l);
//
//for( i = l - 1; i >= 0; i--)
//{
//	printf("%c",c[i]);
//}


//Q-13-A = palindrome by character..!!


// char c[30],d,l;
// int i;
// printf("Enter name to get its palindrome:-");
// scanf("%s",&c);
// 
// l=0;
// for( i = 0; c[i] != '\0'; i++ )
// {
// 	l++;
// }
//
//d=0;
// for( i = 0; i < l; i++)
// {
//   if ( c[i] != c[l-1-i] )
//   {
//   	d=1;
//   }
// }
// 
// if(d==0)
//{
//	printf("%s is a Palandrome character",c);
//}
//else
//	printf("%s is not a Palandrome character",c);


//13-B count same alpha print by palindrome...!!


//char c[30],l;
//int i,d;
//
//printf("Enter.:-");
//scanf("%s",&c);
//
//l=0;
//for( i = 0; c[i] != '\0'; i++ )
//{
//	l++;
//}
//
//d=0;
//for( i = 0; i < l; i++ )
//{
//	if( c[i] == c[l-1-i]  )
//	{
//		d=d+1;
//	}
//}
//printf("%d",d);







//Q-14 output must be 3 times if z then c...!!!

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

//
//
//char c[30];
//
//printf("Enter number:- ");
//scanf("%s",&c);
//
//for( int i = 0; c[i] != '\0'; i++)
//{
//	c[i] = c[i] + 3 ;
//	if( c[i] >=  65 && c[i] <= 90 )
//	{
//	   c[i] = c[i];
//	}	
//	else if( c[i] > 90 )
//	{
//	   c[i] = 64 + ( c[i] - 90 );
//	}
//	
//	printf("%c",c[i]);
//}
// 

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx



//Q-15 


//a
//as
//ash
//asho
//ashok
//asho
//ash
//as
//a
  
  
//char c[5];
//printf("Enter no:- ");
//scanf("%s",&c);    
//
//for( int i = 0; i < 5; i++)
//{ 
//for(int j = 0; j < i; j++)
//{
//  printf("%c",c[j]);
//}
//printf("\n");
//}
//for(int i = 4; i >= 0; i--)
//{
//	for( int j = 0; j <= i; j++)
//	{
//		printf("%c",c[j]);
//	}
//printf("\n");	
//}


//Q-16 lower/minimum or upper/maximum  character..!!


//char c[30],i,max,min;
//printf("Enter String:- ");
//scanf("%s",&c);
//
//max=c[30];
//min=c[0];
//for( i = 0; c[i] != '\0'; i++)
//{
//	if( c[i] > max ) 
//	{
//		max=c[i];
//	}
//	if( c[i] < min )
//	{
//		min=c[i];
//	}
//}
//printf("%c\n",max);
//printf("%c",min);

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx


//Q-17 same alpha delete... and unique char print..!!

//char c[30],l;
//int i,d;
//
//printf("Enter.:-");
//scanf("%s",&c);
//
//l=0;
//for( i = 0; c[i] != '\0'; i++ )
//{
//	l++;
//}
//
//d=0;
//for( i = 0; i < l; i++ )
//{
//	if( c[i] == c[l-1-i]  )
//	{
//		d=1;
//	}
//}
//
//if (d==0)
//{
//	printf("%s",c);
// } 
//else
//printf("%s",c);

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx



//end of main
}
