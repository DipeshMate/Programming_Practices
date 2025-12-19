#include<iostream>
using namespace std;
main()
{
	int a,b,c,d,e;
	cout<<"enter a 5 digit number = ";
	cin>>a;
	b=a/10000
	;c=a%10;
	d=a/100
	;e=d%10;
	cout<<b<<"+"<<e<<"+"<<c<<"="<<(b+e+c);
}
