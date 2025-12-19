#include<iostream>
#include<iterator>
#include<vector>
using namespace std;
main()
{
	vector<int>v;
	int ch,p,z;
	vector<int>::iterator i;
	while(1)
	{
		cout<<"enter 1 to add"<<"\n"<<"enter 2 to show"<<"\n"<<"enter 3 to reverse"<<"\n"<<"enter 4 to remove"<<"\n"<<"enter 5 to clear";
		cin>>ch;
		if(ch==1)
		{
			cout<<"enter the element = ";
			cin>>p;
			v.push_back(p);
		}
		if(ch==2)
		{
			if(v.empty())
			{
				cout<<"no elements";
			}
			else
			{
				for(i=v.begin();i<v.end();i++)
				{
					cout<<*i<<" ";
				}
			}
		}
		if(ch==3)
		{
		  
		}
		if(ch==4)
		{
			cout<<"enter the element= ";
			cin>>z;
			for(i=v.begin();i!=v.end();i++)
			{
				if(*i==z)
				{
					v.erase(i);
				}
			}
		}
		if(ch==5)
		{
			v.clear();
		}
	}
}
