#include<iostream>
using namespace std;
main()
{
		int n,i,p,sum=0;
	cout<<"enter the number of inputs u want = ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cout<<"enter the number= ";
		cin>>p;
		sum=sum+p;
    }
    cout<<"\nsum is = "<<sum;
}
