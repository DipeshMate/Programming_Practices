#include<iostream>
using namespace std;
main()
{
	int i,j;
	for(i=1;i<=5;i=i+1)
	{
	for(j=1;j<=5;j=j+1)
	{
		for(j=5;j>=1;j=j--)
		{
		
		if(i==j)
		{
			  cout<<"*";
	     	}
	     	
	     	 else
	     	 if(j==i)
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
		
	}
