#include<iostream>
using namespace std;
main()
{
	int size,i,max;
	cout<<"enter the size of array";
	cin>>size;
	int a[size];
	for(i=0;i<size;i++)
	{
		cin>>a[i];
	}
	max=a[0]
	for(i=0;i<size;i++)
	{
		if (a[i]>max)
		{
			max=a[i];
		}

	}	cout<<"\n"<<"max no"<<max;
}
