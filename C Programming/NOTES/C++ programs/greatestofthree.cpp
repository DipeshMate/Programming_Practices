#include<iostream>
using namespace std;
main()
{
	int a,b,c;
	cout<<"enter three numbers = ";
	cin>>a>>b>>c;
	if(a>b and a>c)
	{
		cout<<"a is geatest";
	}
	else if(b>a and b>c)
	{
		cout<<"b is greatest";
	}
	else if (c>a and c>b)
	{
		cout<<"c is greatest";
	}
}
