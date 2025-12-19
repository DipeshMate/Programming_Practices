#include<iostream>
using namespace std;
struct student{
	int r;
	string n;
	float m1,m2,m3;
};
main()
{
student s;
float t,p;
cout<<"roll no";
cin>>s.r;
cout<<"name";
cin>>s.n;
cout<<"mark of three subject";
cin>>s.m1>>s.m2>>s.m3;
t=s.m1+s.m2+s.m3;
p=t/3;
cout<<"percentage"<<p;
}

