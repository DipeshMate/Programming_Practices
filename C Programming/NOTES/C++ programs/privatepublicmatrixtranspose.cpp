#include<iostream>
using namespace std;
struct transpose
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
			for (i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					cout<<a[i][j];
				}
				cout<<"\n";
			}
		}
		void trans()
		{
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					cout<<a[j][i];
				}
				cout<<"\n";
			}
		}
};
main()
{
	transpose m;
	m.input();
	m.display();
	m.trans();
}
