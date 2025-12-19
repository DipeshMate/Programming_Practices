#include<iostream>
using namespace std;
struct demo
{
	private:
	int a;
	public:
		 void input()
		 {
		 	cout<<"enter number";
		 	cin>>a;
		 }
		 void display()
		 {
		 	cout<<"a="<<a;
		 }
	};
	main()
	{
		demo d;
		d.input(); 
		d.display();
	}
