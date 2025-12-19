#include<iostream>
using namespace std;
void single(int n)
{
	int b,f;
	while(n>9)
	{
		f=1;
		while(n!=0)
		{
			b=n%10;
			n=n/10;
			f=f*b;
		}
		n=f;
	}
	cout<<f;
}
main()
{
	int n;
	cin>>n;
	single(n);
}
