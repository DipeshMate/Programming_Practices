#include<iostream>
using namespace std;
class data
{
	int a,b;
	public:
		data ()
		{
			
		}
		data(int x ,int y)
		{
			a=x;
			b=y;
		}
	void operator-()
{
	a=-a;
	b=-b;
}
void show()
{
	cout<<a<<b;
}
};
main()
{
	data d1(4,5);
	-d1;
	d1.show();
}
	
		
