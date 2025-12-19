#include<iostream>
using namespace std;
main()
{
	int a[5],i,s=0;
	for(i=0;i<5;i++)
	{
		cout<<"enter element = ";
		cin>>a[i];
	}
	for(i=0;i<5;i++)
	{
		s=s+a[i];
	}
	cout<<"sum is = "<<s;
}
