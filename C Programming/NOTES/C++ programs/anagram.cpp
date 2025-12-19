#include<iostream>
#include<string.h>
using namespace std;
main()
{
	char c[30],d[30],e,a;
	int i,j;
	cout<<"enter first string = ";
	cin>>c;
	cout<<"enter second string = ";
	cin>>d;
	//below code is for sorting of the strings.After sorting we will compare them using strcmp().
	for(i=0;i<= strlen(c)-1;i++)
	{
		for(j=i+1;j<strlen(c);j++)
		{
			if(c[i]<c[j])
			{
				e=c[i];
				c[i]=c[j];
				c[j]=e;
			}
		}
	}
	for(i=0;i<=strlen(d)-1;i++)
	{
		for(j=i+1;j<strlen(d);j++)
		{
			if(d[i]<d[j])
			{
				a=d[i];
				d[i]=d[j];
				d[j]=a;
			}
		}
	}
	if(strcmp(c,d)==0)
	{
		cout<<"anagram";
	}
	else
	{
		cout<<"not an anagram";
	}
}
