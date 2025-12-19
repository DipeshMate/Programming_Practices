#include<iostream>
using namespace std;
main()
{
	int n,m,p,sum=0,i,total;
	cout<<"enter number of patients = ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cout<<"enter the age of patient = ";
		cin>>p;
	
		if(p>=1 and p<=10)
		{
			sum=sum+200;
		}
		else if(p>=11 and p<=50)
		{
			sum=sum+300;
		}
		else if (p>50)
		{
			sum=sum+400;
		}
	}
	total=sum;
	cout<<"Total bill is = "<<total;
}
