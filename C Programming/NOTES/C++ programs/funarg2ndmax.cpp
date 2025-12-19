#include<iostream>
using namespace std;
void secondmax(int n)
{
	int max1=0,max2=0,i,m;
	
	for (i=1;i<=n;i++)
	{
		cout<"enter number = ";
		cin>>m;
		if (max1<m)
		{
			max2=max1;
			max1=m;
		}
	}
	
	cout<<"second max = "<<max2;
}
main()
{
	int n;
	cin>>n;
	secondmax(n);
}
