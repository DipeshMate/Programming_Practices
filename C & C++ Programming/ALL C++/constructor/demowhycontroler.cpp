#include<iostream>
using namespace std;
class demo
{
	int a,b;
	public:
		demo()
		{
			a=0;
			b=0;
		}
		demo(int x,int y)
		{
			a=x;
			b=y;
		}
		demo(demo& d)
		{
			a=d.a;
			b=d.b;
		}
		void display()
		{
			cout<<"a="<<"\n";
			cout<<"b="<<"\n";
		}
};
main()
{
	demo d1,d2(8,9),d3(d2),d4(d1);
	d1.display();
	d2.display();
	d3.display();
    d4.display();
}
