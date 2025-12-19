#include<iostream>
using namespace std;
main()
{
	int n;
	cout<<"enter the value of n = ";
	cin>>n;
	if (n==1||n==2)
	{
		cout<<0;
	}
	else if(n==0)
	{
		cout<<"invalid input";
	}
	else if(n%2==0)
	{
		cout<<6*((n/2)-1);
	}
	else if(n%2!=0)
	{
		cout<<7*(n/2);
	}
}
