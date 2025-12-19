#include<iostream>
using namespace std;
main()
{
	int n,p,m,c=0,i,j=0;
	cout<<"enter the number of inputs u want = ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cout<<"enter the number = ";
		cin>>p;
		if(p<j)
		{
			c=c+1;
		}
		j=p;
	}
	if(c==0)
	{
		cout<<"YES";
	}
	else if(c>0)
	{
		cout<<"NO";
	}
}
