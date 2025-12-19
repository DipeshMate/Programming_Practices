#include<iostream>
using namespace std;
main()
{
	int size,c,i,j;
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
		c=0;
		for(j=i;j<size;j++)
		{
			if(a[i]==a[j])
			{
				c=c+1;
				
			}
		}
		cout<<"\n"<<a[i]<<"="<<c;
	}
}
