#include<iostream>
using namespace std;
main()
{
	int a[5],b[5],c[5],i;
	cout<<"enter element of a"<<"\n";
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	cout<<"enter element of b"<<"\n";
	for(i=0;i<5;i++)
	{
		cin>>b[i];
    }
	for(i=0;i<5;i++)
	{
		c[i]=a[i]+b[4-i];
	
	cout<<c[i]<<"\n";
	}
}
