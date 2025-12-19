#include<iostream>
using namespace std;
main()
{
	int b,n=0,q=9;
	cout<<"enter value of n";
	cin>>n;

	while(n!=0)
	{
		b=n%10;
		if(n<b)
		{
			n=b;
		}
		else if(q>b)
		{
			q=b;
		}
		n=n/10;
	}
	cout<<"maximum number is =" <<n<<"\n";
	cout<<"minimum number is =" <<q;
}

