#include<iostream>
using namespace std;
main()
{
	int a,b,sum=0;
	cout<<"enter number";
	cin>>a;
	while(a!=0)
	{
		b=a%10;
		cout<<b<<"\n";
		a=a/10;
		sum=sum+b;
		
	}
	cout<<"sum="<<sum;
}
