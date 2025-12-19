#include<iostream>
using namespace std;
main()
{
	int n,sum,a,b,c,d,e,f,g,i;
	cout<<"enter a 5-digit number = ";
	cin>>n;
	a=n/10000;
	i=n%10;
	b=n/1000;
	c=b%10;
	d=n/100;
	e=d%10;
	f=n/10;
	g=f%10;
	sum=(a+c+e+g+i);
	if(n/10000==0 or n/10000>=10)
	{
		cout<<"INVALID INPUT";
	}
	else if(sum%2==0)
	{
		cout<<"SUM IS EVEN";
	}
	else
	{
		cout<<"SUM IS ODD";
	}
}
