#include<iostream>
using namespace std;
main()
{
	int n,b, max=0;
	cout<<"enter number";
	cin>>n;
	while(n!=0)
	{
		b=n%10;
		n=n/10;
		if(n>max)
		n=b;
		{
			cout<<"maximum number";
		}
	}
}
