#include<iostream>
using namespace std;
class demo
{
	int a,b;
	public:
	void input()
		{
			cout<<" enter a or b";
			cin>>a>>b;
		}
		void output()
		{
			cout<<" enter a or b";
			cin>>a>>b;
		}
		void add(demo d2)
		{
			demo d3;
			d3.a=a+d2.a;
			d3.b=b+d2.b;
			cout<<"add d3="<<d3.a<<"&"<<d3.b<<"\n";
			
		}
			void multiple(demo d2)
		{
			demo d3;
			d3.a=a*d2.a;
			d3.b=b*d2.b;
			cout<<"multiple d3="<<d3.a<<"&"<<d3.b<<"\n";
			
		}
			void subtract(demo d2)
		{
			demo d3;
			d3.a=a-d2.a;
			d3.b=b-d2.b;
			cout<<"subtract d3="<<d3.a<<"&"<<d3.b<<"\n";
			
		}
	      void division(demo d2)
		{
			demo d3;
			d3.a=a/d2.a;
			d3.b=b/d2.b;
			cout<<"division d3="<<d3.a<<"&"<<d3.b<<"\n";
			
		}
	};
	main()
	{
	 demo d1,d2;
	 d1.input();
     d2.input();
	 d1.output();
	 d2.output();
	 d1.add(d2);
     d1.multiple(d2);
     d1.subtract(d2);
	d1.division(d2);
    }
