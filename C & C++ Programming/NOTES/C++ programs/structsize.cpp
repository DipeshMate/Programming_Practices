#include<iostream>
using namespace std;
struct size
{
	int m,cm;
};
main()
{
	size s1,s2,s3;
	int a,i,b;
	cout<<"enter sizes in metres = \n";
	cin>>s1.m>>s2.m;
	cout<<"\nenter sizes in centimetres = \n";
	cin>>s1.cm>>s2.cm;
	s3.m=s1.m+s2.m;
	s3.cm=s1.cm+s2.cm;
	if(s3.cm>=100)
	{
		a=(s3.cm/100);
		b=(s3.cm%100);
		s3.m=(s3.m)+a;
		s3.cm=b;
		cout<<"metres"<<"="<<s3.m;
		cout<<"\n"<<"centimetres"<<"="<<s3.cm;
	}
	else
	{
		cout<<"meters"<<"="<<s3.m;
		cout<<"\n"<<"centimetres"<<"="<<s3.cm;
	}
}
