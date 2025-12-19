#include<iostream>
using namespace std;
void factorial()
{
	int i,n,fact=1;
	cout<<"enter no";
	cin>>n;
	for(i=n;i>=1;i=i-1)
	{
		fact=fact*i;
	}
	cout<<"factorial of no is"<<fact;
}
 main()
{
factorial();
}

