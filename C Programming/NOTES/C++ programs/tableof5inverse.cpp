#include<iostream>
using namespace std;
main()
{
	int n,m,i;
	cout<<"enter the number = ";
	cin>>n;
	for(i=10;i>=1;i=i-1)
	{
		m=n*i;
		cout<<"\n"<<m;
	}
}
