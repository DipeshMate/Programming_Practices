#include<stdio.h>
#include<string.h>

//Q-1 DEMo getting a file read..!!??


//main(){
//	
//FILE *fp;
//
//fp=fopen("M.txt","r");
//char c;
//while(1)
//{
//	c = fgetc(fp);
//   if( c == EOF ) 
//	{
//		break;
//	}
//}
//	printf("%c",c);
//
//fclose(fp);	
//}

//Q-2 no. of vowels are..!!??


//main(){
//	
//FILE *fp;
//
//fp=fopen("M.txt","r");
//char c;
//int d=0;
//while(1)
//{
//	c = fgetc(fp);
//  
//   if( c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
//   {
//   	d++;
//   }
//   if( c == EOF ) 
//	{
//		break;
//	}
//}
//	printf("In file vowels are:- %d",d);
//
//fclose(fp);	
//}

//Q-3 count lower and upper case in  a file..!!!


//main()
//{
//  FILE *fp;
//  
//  fp=fopen("M.txt","r");
//  
//  char c;
//  int d=0,e=0;
//  
//  while(1){
//  
//  c = fgetc(fp);
//  
//  	if(c==EOF)
//	{
//		break;
//	} 	
//
//	 if ( c>=65&&c<=90)
//	 {
//	 	d=d+1;
//	 }
//
//	if (c>=97&&c<=122)
//	 {
//	 	e=e+1;
//	 }
//
//}
//	 	printf("UPPER CASE in a FILE:-%d\n",d);
//	 	printf("LOWER CASE in a FILE:-%d",e);	
//
//
//fclose(fp);	
//}



//Q-4 convert lower to upper & upper to lower in  a file..!!!


//main()
//{
//  FILE *fp;
//  
//  fp=fopen("ULlu.txt","r");
//  
//  char c;
//  
//  while(1){
//  
//  c = fgetc(fp);
//  
//  	if(c==EOF)
//	{
//		break;
//	} 	
//
//	 if ( c>=65&&c<=97)
//	 {
//	 	c=c+32;
//	   printf("%c",c);
//	 }
//else if (c>=97&&c<=122)
//	 {
//	 	c=c-32;
//	  printf("%c",c);
//	 }
//
//}
//
//
//fclose(fp);	
//}


//Q-5 print next third vowels.. in a file..!!!

//
//main()
//{
//  FILE *fp;
//  
//  fp=fopen("nextvo.txt","r");
//  
//  char c;
//  int i;
//  
//  while(1)
//  {
//    c = fgetc(fp);
//    if(c==EOF)
//    {
//	break;
//   }
//   
//  if( c =='a') 
//  {
//  	printf("e");
//  }
//  else if ( c == 'e')
//  {
//  	printf("i");
//  }
//   else if( c == 'i')
//  {
//  	printf("o");
//  }
//   else if( c == 'o')
//  {
//  	printf("u");
//  }
//   else if( c == 'u')
//  {
//  	printf("a");
//  }
//   else
//    printf("%c",c);
//
//}
//
//fclose(fp);	
//}






