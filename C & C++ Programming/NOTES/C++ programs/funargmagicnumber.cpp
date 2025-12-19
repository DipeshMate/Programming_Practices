#include<iostream>
using namespace std;
void magic(int n)
{
	int b,r=0,p=0,i,q,c,m;
	i=n;
	while(n!=0)
	{
		b=n%10;
		r=r+b;
		n=n/10;
	}
	q=r;
	while(r!=0)
	{
		c=r%10;
		p=(p*10)+c;
		r=r/10;
	}
	if((p*q)==i)
	{
		cout<<"magic number";
	}
	else
	{
		cout<<"not a magic number";
	}
}
main()
{
	int n;
	cin>>n;
	magic(n);
}
