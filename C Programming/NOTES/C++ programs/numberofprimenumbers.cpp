#include<iostream>
using namespace std;
main()
{
	int n,c=0,j,i,m=0,p;
	cout<<"enter the number of inputs u want = ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cout<<"enter the number = ";
		cin>>p;
		for(j=1;j<=p;j++)
		{
			if(p%j==0)
			{
				c=c+1;
			}
	    }
			if(c==2)
			{
				m=m+1;
			}
			c=0;
	}
	cout<<"no. of prime numbers are = "<<m;
}
