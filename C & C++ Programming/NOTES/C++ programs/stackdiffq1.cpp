#include<iostream>
#include<stack>
#include<string>
using namespace std;
main()
{
	int size,n,i;
	cout<<"enter size of array = ";
	cin>>size;
	int a[size];
	stack<int>s;
	for(i=0;i<size;i++)
	{
		cout<<"enter element = ";
		cin>>a[i];
		s.push(a[i]);
	}
	s.push(-1);
	int m;
	for(i=0;i<size;i++)
	{
		m:
		if(a[i]>s.top())
		{
			cout<<"\n"<<s.top();
			s.push(a[i]);
		}
		else
		{
			s.pop();
			goto m;
		}
	}
}
