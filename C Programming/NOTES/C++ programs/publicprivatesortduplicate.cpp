#include<iostream>
using namespace std;
struct array
{
	private:
		int a[5],i,j,f,t;
	public:
		
		for(i=0;i<5;i++)
		{
			cout<<"enter element = ";
			cin>>a[i];
		}
		void sort()
		{
			for(i=0;i<5;i++)
			{
				for(j=i+1;j<5;j++)
				{
					if(a[i]>a[j])
					{
						t=a[i];
						a[i]=a[j];
						a[j]=t;
					}
				}
				cout<<"\n"<<a[i];
			}
		}
		void duplicate()
		{
			for(i=0;i<5;i++)
			{
				f=0;
				for(j=i-1;j>=0;j--)
				{
					if(a[i]==a[j])
					{
						f=1;
						break;
					}
				}
				if(f==0)
				{
					cout<<"\n"<<a[i];
				}
			}
		}
}
main()
{
	array c;
	c.sort();
	c.duplicate();
	int ch;
	while(1)
	{
		cout<<"press 1 for sort and 2 for duplicate : ";
		cin>>ch;
		if(ch==1)
		{
			c.sort();
		}
		else if(ch==2)
		{
			c.duplicate();
		}
		else if(ch>2)
		{
			break;
		}
	}
}
