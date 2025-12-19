#include<iostream>
#include<math.h>
using namespace std;
main()
{
	int n;
	cout<<"enter the value of n = ";
	cin>>n;
	if(n==1||n==2)
	{
		cout<<1;
	}
	else if(n==0)
	{
		cout<<"invalid input";
	}
	else if(n%2==0)
	{
		cout<<pow(3,((n-2)/2));
	}
	else if(n%2!=0)
	{
		cout<<pow(2,((n-1)/2));
	}
}
