#include<iostream>
#include<string.h>
using namespace std;
struct student
{
	private:
		string name;
		int rnum;
		float m1,m2,m3;
	public:
		void input()
		{
			cout<<"enter name of the student = ";
			cin>>name;
			cout<<"\n"<<"enter roll number of the student = ";
			cin>>rnum;
			cout<<"\n"<<"enter the marks of physics,chemistry and maths(out of 100) respectively = ";
			cin>>m1>>m2>>m3;
			if(m1>100 or m2>100 or m3>100)
			{
				cout<<"invalid marks";
			}
		}
		void display()
		{
			cout<<"name : "<<name;
			cout<<"\n"<<"roll number : "<<rnum;
			cout<<"\n"<<"score in physics: "<<m1;
			cout<<"\n"<<"score in chemistry: "<<m2;
			cout<<"\n"<<"score in maths: "<<m3;
		}
		void calculation()
		{
			float t=(m1+m2+m2);
			float p;
			p=(t/300)*100;
			if(p>=75 and p<=100)
			{
				cout<<"\n"<<"grade : A";
			}
			else if(p>=60 and p<75)
			{
				cout<<"\n"<<"grade : B";
			}
			else if(p>=50 and p<60)
			{
				cout<<"\n"<<"grade : C";
			}
			else if(p>=35 and p<50)
			{
				cout<<"\n"<<"grade : D";
			}
			else if(p<35)
			{
				cout<<"\n"<<"FAIL";
			}
		}
};
main()
{
	student d;
	d.input();
	d.display();
	d.calculation();
}
