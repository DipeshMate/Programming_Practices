#include<iostream>
using namespace std;
struct matrix
{
	private:
		int a[3][3];
	public:
		int i,j;
		void input()
	{
		
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				cin>>a[i][j];
			}
		}
	}
	    void display()
	{
		
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				cout<<a[i][j];
			}
			cout<<"\n";
		}
	}
};
main()
{
	matrix m;
	m.input();
	m.display();
	int ch;
	while(1)
	{
		cout<<"choose 1 for input and 2 for display : ";
		cin>>ch;
		if(ch==1)
		{
			m.input();
		}
		else if(ch==2)
		{
			m.display();
		}
		else if(ch>2)
		{
			break;
		}
	}
}
