#include<iostream>
using namespace std;
main()
{
	int i,j;
	for(i=1;i<=5;i=i+1)
	{
	for(j=1;j<=10;j=j+1)
	{
		if(i==j||j==11-i&&j!=6)
		{
			  cout<<"*";
	     	}
		
		    else
		    {
			  cout<<" ";
		   	}
		}
		cout<<"\n";
    }	
	}
