#include<iostream>
#include<list>
#include<iterator>
using namespace std;
main()
{
	int size;
	cout<<"enter number of elements u want in list = ";
	cin>>size;
	int i,m,c;
	list<int> mlist,nlist;
	for(i=0;i<size;i++)
	{
		cout<<"enter the element = ";
		cin>>m;
		mlist.push_back(m);
	}
	list<int>:: iterator j;
	for(j=mlist.begin();j!=mlist.end();j++)
	{
		cout<<*j;
	m=*j;
	while(1)
	{
		m=m+1;
		c=0;
		for(i=1;i<=m;i++)
		{
			if(m%i==0)
			{
				c=c+1;
			}
		}
		if(c==2)
		{
			nlist.push_back(m);
			break;
		}
	}
	
}
	for(j=nlist.begin();j!=nlist.end();j++)
	{
		cout<<"\n"<<*j;
	}
}
