#include<iostream>
using namespace std;
class student
{
	int rollno;
	string name;
	float marks;
	public:
		student()
		{
			rollno=45;
			name= "sohan";
			marks=90;
		}
		student(int r,string n,float m)
		{
			rollno=r;
			name=n;
			marks=m;
		}
		student(student & s)
		{
			rollno=s.rollno;
			name=s.name;
			marks=s.marks;
		}
		void display()
		{
			cout<<"roll no="<<rollno<<"\n";
			cout<<"name="<<name<<"\n";
		    cout<<"marks="<<marks<<"\n";
	    }
	};
	main()
	{
		student s1,s2(5,"om",98),s3(s2);
		s1.display();
		s2.display();
		s3.display();
	}
