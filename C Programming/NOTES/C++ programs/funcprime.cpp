#include<iostream>
using namespace std;
void prime()
{
	int n,i,c=0;
	cout<<"enter the number = ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			c=c+1;
		}
	}
	if(c==2)
	{
		cout<<"prime number";
	}
	else
	{
		cout<<"not a prime number";
	}
}
main()
{
	prime();
}
