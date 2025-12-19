#include<iostream>
using namespace std;
main()
{
	int s1,s2,s3,ms11,ms12,ms13,ms21,ms22,ms23,ms31,ms32,ms33,sum1,sum2,sum3;
	cout<<"CLASS TEST 1";
	cout<<"enter marks of student1 = ";
	cin>>ms11;
	cout<<"enter marks of student2 = ";
	cin>>ms21;
	cout<<"enter marks of student3 =";
	cin>>ms31;
	cout<<"CLASS TEST 2";
	cout<<"enter marks of student1 =";
	cin>>ms12;
	cout<<"enter marks of student2 =";
	cin>>ms22;
	cout<<"enter marks of student3 =";
	cin>>ms32;
	cout<<"CLASS TEST 3";
	cout<<"enter marks of student1 =";
	cin>>ms13;
	cout<<"enter marks of student2 =";
	cin>>ms23;
	cout<<"enter marks of student3 =";
	cin>>ms33;
	sum1=(ms11+ms12+ms13);
	sum2=(ms21+ms22+ms23);
	sum3=(ms31+ms32+ms33);
	if(sum1>sum2 and sum1>sum3)
	{
		cout<<"STUDENT 1";
	}
	else if(sum2>sum1 and sum2>sum3)
	{
		cout<<"STUDENT 2";
	}
	else if (sum3>sum1 and sum3>sum2)
	{
		cout<<"STUDENT 3";
	}
	else if(sum1==sum2 and sum1==sum3)
	{
		cout<<"STUDENT 1,2,3";
	}
	else if(sum1==sum2)
	{
		cout<<"STUDENT 1,2";
	}
	else if(sum2==sum3)
	{
		cout<<"STUDENT 2,3";
	}
	else if(sum1==sum3)
	{
		cout<<"STUDENT 1,3";
	}
}
