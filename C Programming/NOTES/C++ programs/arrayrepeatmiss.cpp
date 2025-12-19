#include<iostream>
using namespace std;
main()
{
	int size,i,j,f;
	cout<<"enter size = ";
	cin>>size;
	int a[size];
	for(i=0;i<size;i++)
	{
		cout<<"enter element = ";
		cin>>a[i];
	}
	for(i=0;i<size;i++)
	{
		if(a[i+1]-a[i]==0)
		{
			cout<<"repeating element is = "<<a[i];
		}
		if(a[i+1]-a[i]==2)
		{
			cout<<"\n"<<"missing element = "<<(a[i]+1);
		}
	}
}
