#include<iostream>
using namespace std;
void strong(int n)
{
	int b,r=0,m=1,c,i;
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
	int n;
	cin>>n;
	strong(n);
}
