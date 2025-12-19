#include<iostream>
using namespace std;
main()
{
	int i,n,b,c=1;
	cout<<"enter number";
	cin>>n;
	while(n!=0)
	{
		b=n%10;
		n=n/10;
		for(i=1;i<=b;i=i+1)
		{
	    
	    cout<<c;
		}
	c=c+1;
	cout<<"\n";
		
	}
	
}
