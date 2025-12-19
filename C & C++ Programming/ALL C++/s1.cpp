#include<conio.h>
#include<stdio.h>
#include<string.h>
int main()
{
char a[5];
int s,l,e;
printf("Enter a palindrom");
gets(a);
l=strlen(a);
e=l-1;
for(s=0;s<e;s++);
{
	if(a[5]!=a[e])
	{
		printf("it is not a palindrom");
	}
	e--;
}
	if(s==e);
	{
	printf("it is a palindrom");
	}
}

