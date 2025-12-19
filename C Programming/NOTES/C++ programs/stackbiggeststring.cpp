#include<iostream>
#include<stack>
#include<string>
using namespace std;
main()
{
	int i,n,j=0;
	cout<<"enter the number of inputs u want = ";
	cin>>n;
	
	stack<string>v;
	string z,m,k;
	for(i=0;i<n;i++)
	{
		cout<<"enter string = ";
		cin>>m;
		v.push(m);
	}
	while(!v.empty())
	{
		z=v.top();
		if(z.length()>j)
		{
			j=z.length();
			k=z;
		}
		v.pop();
	}
	cout<<k;
}
