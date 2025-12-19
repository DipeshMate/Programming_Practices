#include<iostream>
using namespace std;
struct add
{
	private:
		int a,b,c;
		public:
			void input()
			{
				cout<<"enter number";
				cin>>a>>b;
			}
			void cal()
			{
				c=a+b;
				cout<<c;
				
			}
			void greater()
			{
				if(a>b)
				{
					cout<<"a is greater"<<"\n";
				}
				else
				{
					cout<<"b is greater";
					
				}
	
			}
		};
		main()
		{
			add x;
			x.input();
			x.cal();
			x.greater();
		}
