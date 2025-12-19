#include<iostream>
using namespace std;
void palindrome()
{
	int n,r=0,b,m;
	cout<<"enter the number = ";
	cin>>n;
	m=n;
	while (n!=0)
	{
		b=n%10;
		r=(r*10) +b;
		n=n/10;
	}
	
	if(m==r)
	{
		cout<<"palindrome";
	}
	else
	{
		cout<<"not a palindrome";
	}
}
main()
{
	palindrome();
}
