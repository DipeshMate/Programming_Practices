#include<iostream>
using namespace std;
main()
{
	int n,m,a=0,i;
	cout<<"enter the first number = ";
	cin>>n;
	cout<<"enter the second number = ";
	cin>>m;
	for(i=n;i<=m;i++)
	{
		a=a+i;
	}
	cout<<a;
}
