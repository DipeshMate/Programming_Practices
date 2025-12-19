#include<iostream>
using namespace std;
struct student
{
	string name1,name2,name3;
	int r1,r2,r3,m1,m2,m3;
};
main()
{
	student s1,s2,s3;
	int sum1,sum2,sum3,i;
	
	
	  cout<<"enter name of student1 = ";
	  cin>>s1.name1;
	  cout<<"\nenter name of student2 = ";
	  cin>>s2.name2;
	  cout<<"\nenter name of student3 = ";
	  cin>>s3.name3;
	  cout<<"\nenter roll number1 = ";
	  cin>>s1.r1;
	  cout<<"\nenter roll number2 = ";
	  cin>>s2.r2;
	  cout<<"\nenter roll number3 = ";
	  cin>>s3.r3;
	  cout<<"\nenter total marks of student1 = ";
	  cin>>s1.m1;
	  cout<<"\nenter total marks of student2 = ";
	  cin>>s2.m2;
	  cout<<"\nenter total marks of student3 = ";
	  cin>>s3.m3;
    
    if(s1.m1>s2.m2 and s1.m1>s3.m3)
    {
    	cout<<s1.name1<<"\n"<<s1.r1;
	}
	else if(s2.m2>s1.m1 and s2.m2>s3.m3)
	{
		cout<<s2.name2<<"\n"<<s2.r2;
	}
	else if(s3.m3>s1.m1 and s3.m3>s2.m2)
	{
		cout<<s3.name3<<"\n"<<s3.r3;
	}
}
