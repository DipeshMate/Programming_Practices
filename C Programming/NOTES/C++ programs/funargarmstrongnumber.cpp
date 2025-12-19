#include<iostream>
using namespace std;
void armstrong(int n)
{
	int b,r=0,i;
	i=n;
	while(n!=0)
	{
		b=n%10;
		r=r+b*b*b;
		n=n/10;
	}
	if(i==r)
	{
		cout<<"armstrong number";
	}
	else
	{
		cout<<"not an armstrong number";
	}
}
main()
{
	int n;
	cin>>n;
	armstrong(n);
}
