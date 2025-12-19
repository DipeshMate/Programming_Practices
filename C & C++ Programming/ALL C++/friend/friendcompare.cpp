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
		void reverse()
		{
			int b;
			while(a!=0)
			{
				b=a%10;
				r=r*10+b;
				a=a/10;
			}
			cout<<"reverse no:"<<r<<"\n";
		}
		friend void compare( x x1,y y1);
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
		void reverse1()
		{
			int n;
			while(b!=0)
			{
				b=b%10;
				r1=r1*10+n;
				b=b/10;
			}
			cout<<"reverse no:"<<r1<<"\n";
		}
		friend void compare( x x1,y y1);
};
void compare(x x1,y y1)
{
	if(x1.r==y1.r1)
	{
		cout<<"the number is equal";
	}
	else
	{
		cout<<"not equal";
	}
}
main()
{
	x x1;
	y y1;
	x1.input();
	x1.reverse();
	y1.input();
	y1.reverse1();
	compare(x1,y1);
}
