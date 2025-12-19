#include<iostream>
using namespace std;
main()
{
	int size,i;
	cout<<"enter size = ";
	cin>>size;
	int a[size];
	for(i=0;i<size;i++)
	{
		cout<<"enter element = ";
		cin>>a[i];
	}
	int min=a[0];
	for(i=0;i<size;i++)
	{
		if(min>a[i])
		{
			min=a[i];
		}
	}
	cout<<"minimum is = "<<min;
}
