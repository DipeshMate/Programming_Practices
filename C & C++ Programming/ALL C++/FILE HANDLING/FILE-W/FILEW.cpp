#include<stdio.h>
#include<string.h>

//Q-1 enter one user roll no, name & marks...!!??


//main(){
//	
//FILE *fp;
//
//fp=fopen("A.txt","w");
//
//
//int rno;
//char n[30];
//float marks;
//
//for(int i = 0; i < 5;i++)
//{
//
//printf("Enter RollNo. Name And Marks:-");
//scanf("%d %s %f",&rno,&n,&marks);
//
//fprintf(fp,"%d \t %s \t %f\n",rno,n,marks);
//}
//
//fclose(fp);
//	
//}


//Q-2 enter product id, product name, quantity & price and get its total...!!??



//main(){
//	
//FILE *fp;
//
//fp=fopen("P.txt","w");
//
//
//int proid,quan;
//char pron[30];
//float price,t;
//
//for(int i = 0; i < 5;i++)
//{
//
//printf("Enter Product id.,Quantity, Product Name, and its Price :-\n");
//scanf("%d %d %s %f",&proid,&quan,&pron,&price);
//
//t=quan*price;
//fprintf(fp,"%d \t %d \t %s \t %f \t %f\n ",proid,quan,pron,price,t);
//}
//
//fclose(fp);
//
//fp=fopen("p.txt","r");
//
//for(int i=0;i<5;i++)
//{
//fscanf(fp,"%d %d %s %f %f",&proid,&quan,&pron,&price,&t);
//printf("%d %d %s %f %f",proid,quan,pron,price,t);
//}
//
//fclose(fp);
//	
//}


//Q-3 enter id, name, dep ,sal and mob...!!??

//main(){
//	
//FILE *fp;
//
//fp=fopen("E.txt","w");
//
//
//int id,mob;
//char n[30],d[30];
//float sal;
//
//for(int i=0;i<2;i++)
//{
//printf("Enter id,Name,Dep., Sal and Mob.no:-\n");
//scanf("%d %s %s %f %d",&id,&n,&d,&sal,&mob);
//fprintf(fp,"%d \t %s \t %s \t %f \t %d\n ",id,n,d,sal,mob);
//}
//fclose(fp);
//
//fp=fopen("E.txt","r");
//for(int i=0;i<2;i++)
//{
//fscanf(fp,"%d %s %s %f %d",&id,&n,&d,&sal,&mob);
//printf("%d %s %s %f %d\n",id,n,d,sal,mob);
//}
//fclose(fp);
//	
//}


//Q-4 enter id, name, dep ,sal and mob. enter and display.!!??


//
//main(){
//
//FILE *fp;
//
//fp=fopen("F.txt","w");
//
//int id,sal,u;
//long int mob;
//char n[30], d[30];
//
//for( int i = 0; i < 2; i++)
//{
//printf("Enter id,Name,Dep,Sal and Mob.no:-\n");
//scanf("%d %s %s %d %li",&id,&n,&d,&sal,&mob);
//fprintf(fp,"%d \t %s \t %s \t %d \t %li\n",id,n,d,sal,mob);	
//}	
//fclose(fp);
//
//fp=fopen("F.txt","r");
//
//printf("Enter id to be search");
//scanf("%d",&u);
//for(int i = 0; i < 2; i++)
//{
//
//fscanf(fp,"%d %s %s %d %li",&id,&n,&d,&sal,&mob);
//if( u == id) 
//{
//printf("%d %s %s %d %li\n",id,n,d,sal,mob);	
//}
//
//}
//fclose(fp);
//
//	
//}
