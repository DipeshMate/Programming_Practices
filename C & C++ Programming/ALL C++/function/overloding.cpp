#include<iostream>
using namespace std;
void area(int r)
{
	int a;
	a=3.14*r*r;
	cout<<"area of ciclr"<<a;
	
}
void area(int l,int b)
{
	int c;
	c=l*b;
	cout<<"area of rectangle"<<c;
}
void area(float x,float y)
{
	int d;
	d=0.5*x*y;
	cout<<"area of triangle"<<d;
}
main()
{
	int r,l,b,ch;
	float x,y;
	cout<<"p1 for area of circle";
	cout<<"p2 for area of rectangle";
	cout<<"p3 for area of triangle";
	cout<<"choice=";
	cin>>ch;
	if(ch==1)
	{
		cout<<"radius=";
		cin>>r;
		area(r);
		}
		else if(ch==2){
		
		cout<<"length="<<"\n";
		cin>>l;
		cout<<"\n"<<"breath=";
		area(l,b);
	}
		else if(ch==3)
		{
			cout<<"base=";
			cin>>x;
				cout<<"\n"<<"hight=";
				cin>>y;
				area(x,y);
		}
		
	}
