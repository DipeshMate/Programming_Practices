#include<iostream>
using namespace std;
main()
{
	int n,b=0,r=0;
	cout<<"enter number";
	cin>>n;
	while(n>0)
	{
		b=n%10;
	r=r*10+b;
		n=n/10;
	}	

	cout<<r;
	
}
