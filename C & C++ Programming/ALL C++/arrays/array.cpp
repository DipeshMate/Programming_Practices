#include<iostream>
using namespace std;
main()
{
	int a[10],i;
	cout<<"enter ten number";
	for(i=1;i<10;i++)
	{
		cin>>a[i];
	}
		for(i=0;i<10/2;i++)
	{
	 a[i]=a[i]+a[9-i];
	cout<<a[i]<<"\n";
	}
}
