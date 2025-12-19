#include<iostream>
using namespace std;
void strong()
{
	int n,b,r=0,i,m=1,c;
	cout<<"enter number = ";
	cin>>n;
	c=n;
	while(n!=0)
	{
		b=n%10;
		for(i=1;i<=b;i++)
		{
			m=m*i;
		}
		r=r+m;
		m=1;
		n=n/10;
	}
	if(c==r)
	{
		cout<<"strong number";
	}
	else
	{
		cout<<"not a strong number";
	}
}
main()
{
	strong();
}
