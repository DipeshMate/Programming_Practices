#include<iostream>
using namespace std;
class y;
class x
{
	int a,r=0;
	public:
		void input()
		{
			cout<<"enter the number"<<"\n";
			cin>>a;
			cout<<"the number is="<<a<<"\n";
        }
		friend void swap( x x1,y y1);
};
class y
{
	int b,r1=0;
		public:
		void input()
		{
			cout<<"enter the number"<<"\n";
			cin>>b;
			cout<<"the number is="<<b<<"\n";
		}
	
		friend void swap( x x1,y y1);
};
void swap(x x1,y y1)
{
	int temp;
	temp=x1.a;
	x1.a=y1.b;
	y1.b=temp;
	cout<<x1.a<<"\n"<<y1.b<<"\n";
}
main()
{
	x x1;
	y y1;
	x1.input();
	y1.input();
	swap(x1,y1);
}
