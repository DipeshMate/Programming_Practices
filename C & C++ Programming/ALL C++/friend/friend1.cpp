#include<iostream>
using namespace std;
class father;
class brother;
class mother
{
	int sal;
	public:
	void input()
	{
    cout<<"enter the salary of mother";
    cin>>sal;
    cout<<sal<<"\n";
	}
	friend void avg(mother m,father f,brother b);
};
class father
{
	int sal;
	public:
	void input()
	{
    cout<<"enter the salary of father";
    cin>>sal;
    cout<<sal<<"\n";
	}
	friend void avg(mother m,father f,brother b);
};
class brother
{
	int sal;
	public:
	void input()
	{
    cout<<"enter the salary of brother";
    cin>>sal;
    cout<<sal<<"\n";
	}
	friend void avg(mother m,father f,brother b);
};
void avg(mother m,father f,brother b)
{
	int avg;
	avg=(m.sal+f.sal+b.sal)/3;
	cout<<"average salary="<<avg;
}
main()
{
   mother m;
   father f;
   brother b;
   m.input();
   f.input();
   b.input();
   avg(m,f,b);
}
