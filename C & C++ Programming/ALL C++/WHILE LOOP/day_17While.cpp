#include<stdio.h>

int main(){
	
// Q-1 Ascending & Descending !!	
//int a,p=0,c=0;
//
//while(1){
// printf("Enter no.");
// scanf("%d",&a);
// 
// if(a==-1)
// {
// 	break;
// }
// if(p>a)
// {
// 	c=c+1;
// }
// p=a;
//}
//
// if(c==0)
// {
// 	printf("yes");
// }
// else{
// 	printf("no");
// }

//Q-2 put numbers and find how many digits are counting??

int a,c = 0,p = 0;

while(1){
	printf("Enter no.");
	scanf("%d",&a);
	
	if(a == -1)
	{
	break;	
	}
	
	if(p != a)
	{
		c = c + 1;
	}
	p = a;
	
}
printf("%d",c);

//end point	
}
