#include<iostream>
using namespace std;
main()
{
	int a[5],b[5],i;
	cout<<"enter 5 number";
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
		for(i=0;i<5;i++)
	{
	 b[i]=a[i]/10;
	cout<<b[i]<<"\n";
	}
}
