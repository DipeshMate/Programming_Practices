#include<iostream>
using namespace std;
main()
{
	int a[3][3],i,j,sum=0,t=0;
		cout<<"enter no";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		
			cin>>a[i][j];
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<a[i][j];
		}
		cout<<"\n";
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
			{
				sum=sum+a[i][j];
				
			}
			if(i+j==2)
			{
				t=t+a[i][j];
			
			}
		}
	}
	cout<<"sum"<<sum;
	cout<<"\n t"<<t;
}
