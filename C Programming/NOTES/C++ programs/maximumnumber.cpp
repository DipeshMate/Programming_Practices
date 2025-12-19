#include<iostream>
using namespace std;
main()
{
	int n,max=0,p,i,j;
	cout<<"enter the number of inputs u want = ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cout<<"enter the number = ";
		cin>>p;
		if(p>max)
		{
			max=p;
		}	       
	}
	cout<<"maximum is = "<<max;
}
