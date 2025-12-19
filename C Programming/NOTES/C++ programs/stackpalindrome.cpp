#include<iostream>
#include<stack>
#include<string>
using namespace std;
main()
{
	int i,j=0,n,l,c=0;
	cout<<"enter the number of inputs u want = ";
	cin>>n;
	string m,k,b,z;
	stack<string>v;
	
	for(i=0;i<n;i++)
	{
		cout<<"enter string = ";
		cin>>m;
		v.push(m);
	}
	
	while(!v.empty())
	{
		z=v.top();
		l=z.length();
		for(i=0;i<l;i++)
		{
			if(z[i]==z[l-1-i])
			{
				c=c+1;
			}
		}
		if(c==l)
		{
			cout<<"\n"<<z<<"="<<"palindrome";
		}
		v.pop();
		c=0;
	}
}
