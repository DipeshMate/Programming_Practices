#include<iostream>
using namespace std;
class complex
{
	int r,i;
	public:
	void input()
		{
			cout<<"enter real no=";
			cin>>r;
			cout<<" imaginary no=";
			cin>>i;
		}
	void display()
		{
			cout<<" enter real no=";
			cout<<r;
			cout<<"  imaginary no=";
			cout<<i;
		}
		void add(complex c2,complex c3)
		{
		
			c3.r+c2.r;
			c3.i+c2.i;
			cout<<"sum of real no and imaginary no="<<c3.r<<"&"<<c3.i;
		}
		void multiplication(complex c2,complex c3)
		{
		
			c3.r*c2.r;
			c3.i*c2.i;
			cout<<"sum of real no and imaginary no="<<c3.r<<"&"<<c3.i;
		}
	};
	main() 
	{
	
	complex c1,c2,c3;
	c1.input();
	c2.input();
	c1.display();
	c2.display();
    c1.add(c2,c3);
    c2.add(c2,c3);
    c1.multiplication(c2,c3);
    c2.multiplication(c2,c3);
	}
