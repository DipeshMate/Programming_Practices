#include<iostream>
using namespace std;
main()
{
	int n,b, m=9;
	cout<<"enter number";
	cin>>n;
	while(n!=0)
	{
		b=n%10;
		n=n/10;
		if(m<b)
		m=b;
		{
			cout<<n;
		}
	}
}
