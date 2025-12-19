#include<iostream>
using namespace std;
class data
{
	private:
		int a,b;
		
	public:
		void input()
		{
			cout<<"enter the two numbers : ";
			cin>>a>>b;
		}
		void display()
		{
			cout<<"a= "<<a;
			cout<<"\n"<<"b= "<<b;
		}
		void add()
		{
			int c;
			c=a+b;
			cout<<"\n"<<"sum is = "<<c;
		}
};
main()
{
	data d;
	d.input();
	d.display();
	d.add();
}
