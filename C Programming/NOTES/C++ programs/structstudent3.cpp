#include<iostream>
#include<string.h>
using namespace std;
class student
{
	int rnum;
	float marks;
	string name;
	public:
		void input()
		{
			cout<<"enter name of the student: ";
			cin>>name;
			cout<<"\n"<<"enter the roll number: ";
			cin>>rnum;
			cout<<"\n"<<"enter the marks: ";
			cin>>marks;
		}
		void display()
		{
			cout<<"\n"<<name;
			cout<<"\n"<<rnum;
			
		}
		int getmarks()
		{
			return marks;
		}
};
main()
{
	student s1,s2,s3;
	s1.input();
	s2.input();
	s3.input();
	if(s1.getmarks()>s2.getmarks() and s1.getmarks()>s3.getmarks())
	{
		s1.display();
	}
	else if(s2.getmarks()>s1.getmarks() and s2.getmarks()>s3.getmarks())
	{
		s2.display();
	}
	else
	{
		s3.display();
	}
}
