#include<iostream>
using namespace std;
void area(int l,int b)
{
	int a;
	a=(l*b);
	cout<<"area of rectangle is = "<<a;
}
void area(int r)
{
	float a;
	a=(3.14)*(r)*(r);
	cout<<"area of circle is = "<<a;
}
void area(float x,float y)
{
	float a;
	a=(0.5)*(x)*(y);
	cout<<"area of triangle is = "<<a;
}
main()
{
	int l,b,r,ch;
	float x,y;
	cout<<"press 1 for rectangle";
	cout<<"press 2 for circle";
	cout<<"press 3 for triangle";
	cin>>ch;
	if(ch==1)
	{
		cout<<"enter length = ";
		cin>>l;
		cout<<"enter breadth = ";
		cin>>b;
		area(l,b);
	}
	if (ch==2)
	{
		cout<<"enter radius = ";
		cin>>r;
		area(r);
	}
	if(ch==3)
	{
		cout<<"enter height = ";
		cin>>x;
		cout<<"enter base = ";
		cin>>y;
		area(x,y);
	}
}
