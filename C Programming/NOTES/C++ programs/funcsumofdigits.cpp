#include<iostream>
using namespace std;
void sod()
{
	int n,b,s=0;
	cout<<"enter the number = ";
	cin>>n;
	while(n!=0)
	{
		b=n%10;
		s=s+b;
		n=n/10;
	}
	cout<<s;
}
main()
{
	sod();
}
