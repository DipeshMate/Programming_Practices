#include<iostream>
using namespace std;
main()
{
	int size,f,i,j;
	cout<<"enter size= ";
	cin>>size;
	int a[size];
	for(i=0;i<size;i++)
	{
		cout<<"enter element = ";
		cin>>a[i];
	}
	for(i=0;i<size;i++)
	{
		f=0;
		for(j=i+1;j<size;j++)
		{
			if(a[i]==a[j])
			{
				f=1;
				break;
			}
		}
		if(f==0)
		{
			cout<<"\n"<<a[i];
		}
	}
}
