#include<iostream>
using namespace std;
main()
{
	int n,r,sum=0,temp;
	cout<<"enter number";
	cin>>n;
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}	
	if(temp==sum)
	cout<<"number is armstrong";
	else
	cout<<"number  is not armstrong";
	
}
