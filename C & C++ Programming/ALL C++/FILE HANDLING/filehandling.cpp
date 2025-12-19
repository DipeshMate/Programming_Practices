#include<stdio.h>
#include<string.h>

//main()
//{
//	FILE *fp;
//	
//	fp=fopen("M.txt","w");
//	
//	fputc ('A',fp);
//	fputc ('B',fp);
//	
//	fclose(fp);
//
//}



//main()
//{
//	FILE *fp;
//	fp=fopen("D.txt","w");
//	
//	char c[30];
//	
//	printf("Enter name:- ");
//	scanf("%s",&c);
//	
//	for( int i = 0; c[i]!='\0'; i++)
//	{
//		fputc(c[i],fp);
//	}
//  
//  fclose (fp);
//	
//}

// Q-1 Reverse name..!!! 


//main()
//{
//	
//	FILE *fp;
//	
//	fp=fopen("Rev.txt","w");
//	
//	char c[30];
//	int i,l;
//	
//	printf("Enter Name:- ");
//	scanf("%s",&c);
//	gets(c);
//
//	for( i = 0; c[i] != '\0';i = i + 1)
//	{
//		l=i;
//	}
//	for( i = l; i >= 0; i = i - 1 )
//	{
//    	fputc(c[i],fp);
//	}
//	
//	fclose(fp);
//}


// Q-2 Eleminate vowels from name..!!! 


//main()
//{
//	FILE *fp;
//	
//	fp=fopen("R.txt","w");
//	
//	int i;
//	char c[30];
//	printf("Enter Name:- ");
//	scanf("%s",&c);
//
//    for( i = 0; c[i] != '\0'; i = i + 1 )
//    {
//    	if( c[i] == 'a' || c[i] == 'e' || c[i] == 'i' || c[i] == 'o' || c[i] == 'u')
//    	{
//    		printf("");
//		}
//		else 
//		{
//		printf("%c",c[i]);
//		fputc(c[i],fp);
//        }
//
//	}
//	
//	fclose(fp);
//
//}



//Q-3 character inverse to upper and lower..!!?


//main() 
//{
//	FILE *fp;
//	
//	fp=fopen("t.txt","w");
//	
//char c[30];
//printf("Enter name:-");
//scanf("%s",&c);
//
//for(int i = 0; c[i] != '\0'; i++)
//{
//
//if( c[i] >=  65 && c[i] <=90 )	
//{
//	c[i] = c[i] + 32;
////	printf("%c",c[i]);
//	fputc(c[i],fp);
//}
//else if( c[i] >= 97 && c[i] <= 122 )
//{
//	c[i] = c[i] - 32;
////    printf("%c",c[i]);
//   	fputc(c[i],fp);
//
//
//}
//
//}
//fclose(fp);
//
//}



//Q-4 ouput must get three times forward...!!!


//main(){
//
//FILE *fp;
//
//fp=fopen("3times.txt","w");
//
//char c[30];
//int i;
//printf("enter name:- ");
//scanf("%s",&c);
//
//for( i = 0; c[i] != '\0'; i++)
//{
//if ( c[i] == 'a' || c[i] == 'e' || c[i] == 'i' || c[i] == 'o' || c[i] == 'u')	
//{
// c[i] = c[i] + 3;
//}
//printf("%c",c[i]);
//fputc(c[i],fp);
//}
//
//fclose(fp);
//
//}


main(){
	
FILE *fp;
fp=fopen("one+3time.txt","w");
	
char c[30];

printf("Enter:-");
scanf("%s",&c);

for( int i = 0; c[i] != '\0'; i++)
{
	c[i] = c[i] + 3;
	if( c[i] >=  90 )
	{
		c[i] = 64 + ( c[i] - 90 );
	}
		printf("%c",c[i]);
		fputc(c[i],fp);
		
}

fclose(fp);
}




