#include<iostream>
using namespace std;
main()
{
	int a[3][3],b[3][3],c[3][3],i,j;

	    cout<<"enter no";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		
			cin>>a[i][j];
		
		}
   }
   cout<<"\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<a[i][j];
		
		}
	    cout<<"\n";
	}
	cout<<"enter no";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			
			cin>>b[i][j];		
		}
		
	}
	cout<<"\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<b[i][j];
		
		}
		cout<<"\n";
	}
	cout<<"sum of two array = \n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			
         c[i][j]=a[i][j]+b[i][j];
         cout<<c[i][j];
        }
        cout<<"\n";
	}

}
