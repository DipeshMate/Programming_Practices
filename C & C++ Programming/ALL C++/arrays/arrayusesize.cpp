#include<iostream>
using namespace std;
main()
{
	int size,i;
	cout<<"enter the size of number";
	cin>>size;
	int a[size];
	for(i=0;i<size;i++)
	{
		cin>>a[i];
	}
		for(i=0;i<size;i++)
	{
	cout<<a[i]<<"\n";
	}
}
