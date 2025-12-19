#include<stdio.h>

int main()
{
int num,a,b,c,d;
printf("Enter the value:-");
scanf("%d",&num);

if(num>=10000 && num<=99999)

{

 a=num%10;
 num=num/100;
 printf("%d \n",a);
 
 b=num%10;
 num=num/100;
 printf("%d \n",b);
 
 c=num%10;
 num=num/1000;
 printf("%d \n",c);
 
 d=a+b+c;
 printf("sum:%d",d);
}
else
 {
 printf("invalid num");
}

}


