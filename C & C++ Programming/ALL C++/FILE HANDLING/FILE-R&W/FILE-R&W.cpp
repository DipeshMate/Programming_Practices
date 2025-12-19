#include<stdio.h>
#include<string.h>

//#fgetc read k liye
//#fputc copy k liye


//Q-1 #demo copy 1 file to another..!!



//main(){

//FILE *fp1, *fp2;
//
//fp1=fopen("a.txt","r");
//fp2=fopen("b.txt","w");
//
//
//char c;
//
//while(1)
//{
//
//c = fgetc(fp1);
//if( c== EOF)
//{
//	break;
//}
//
//fputc(c,fp2);	
//}	
//	
//
//fclose(fp1);
//fclose(fp2);
//}




//Q-2 copy 1 file upper-lower to another file lower-upper..!!!


//main(){
//
//
//FILE *fp1,*fp2;
//
//fp1=fopen("a1.txt","r");
//fp2=fopen("b1.txt","w");
//
//char c;
//
//while(1){
//	
//c = fgetc(fp1);
//if( c==EOF )
//{
//	break;
//}
//
//if( c >= 65 && c <= 90)
//{
//	c=c+32;
//    fputc(c,fp2);
//}
//
//else if ( c >= 97 && c <= 122)
//{
//	c=c-32;
//   fputc(c,fp2);	
//}
//else
//   fputc(c,fp2);	
//
//
//}
//
//fclose(fp1);
//fclose(fp2);
//
//}

//Q-3 copy 1 file next vowel to another file !!!


//main(){
//
//FILE *fp1, *fp2;	
//
//fp1=fopen("a2.txt","r");	
//fp2=fopen("b2.txt","w");	
//
//char c;
//while(1){
//
//c = fgetc(fp1);	
//if(c==EOF)
//{
//	break;
//}
//
//if(c =='a')
//{
//	fputc('e',fp2);
//}
//else if( c =='e')
//{
//	fputc('i',fp2);
//}
//else if( c =='i')
//{
//	fputc('o',fp2);
//}
//else if( c =='o')
//{
//	fputc('u',fp2);
//}
//else if( c =='u')
//{
//	fputc('a',fp2);
//}
//else 
//    fputc(c,fp2);	
//
//
//}
//
//fclose(fp1);
//fclose(fp2);
//
//}


//Q-4 copy 2 file to third file !!!


//main(){
//	
//FILE *fp1, *fp2, *fp3;
//
//fp1=fopen("x.txt","r");	
//fp2=fopen("y.txt","r");	
//fp3=fopen("z.txt","w");	
//
//
//char c;
//while(1){
//	
//c = fgetc(fp1);
//if(c==EOF)
//{
//	break;
//}
//
//fputc(c,fp3);	
//}
//fputc(' ',fp3);
//while(1){
//	
//c = fgetc(fp2);
//
//if(c==EOF)
//{
//	break;
//}
//	
//fputc(c,fp3);	
//}
//
//fclose(fp1);
//fclose(fp2);
//fclose(fp3);
//	
//}


//Q-5 no vowel to next file..!!


//main(){
//	
//FILE *fp1, *fp2;	
//
//fp1=fopen("c.txt","r");
//fp2=fopen("d.txt","w");
//
//char c;
//while(1){
//c = fgetc(fp1);
//if(c==EOF)
//{
//	break;
//}

//if( c=='a'|| c=='e'|| c=='i'|| c=='o'|| c=='u')
//{
//	
//}
//else
//fputc(c,fp2);

//if( c == 'a')
//{
//  //fputc(' ',fp2);
//}
//else if( c == 'e')
//{
//   //fputc(' ',fp2);
//}
// else if( c == 'i')
//{
// // fputc(' ',fp2);
//}
// else if( c == 'o')
//{
//// fputc(' ',fp2);
//}
// else if ( c == 'u')
//{
//// fputc(' ',fp2);
//}
//else
//fputc(c,fp2);

	
//}
//	
//fclose(fp1);
//fclose(fp2);
//	
//	
//}

