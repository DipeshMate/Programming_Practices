#include<iostream>
using namespace std;
main()
{
	int size;
	cout<<"enter size = ";
	cin>>size;
	int a[size],i,max=0,n;
	for(i=0;i<size;i++)
	{
		cout<<"enter element = ";
		cin>>a[i];
	}
	for(i=0;i<size;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	cout<<"maximum is = "<<max;
}
