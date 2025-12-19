#include<iostream>
using namespace std;
main()
{
	int n,a=500,b=200,c=100,d=50,e=20,f=10,g,i,j,k,l,m,p,q,x,y,z,h;
	cout<<"enter the amount = ";
	cin>>n;
	g=n/a;
	i=n-g*a;
	j=i/b;
	k=i-j*b;
	l=k/c;
	m=k-c*l;
	p=m/d;
	q=m-p*d;
	x=q/e;
	y=q-e*x;
	z=y/f;
	h=y-z*f;
	if(g>0)
	{
		cout<<"500 notes are = "<<g;
	}
	if(j>0)
	{
		cout<<"\n200 notes are = "<<j;
	}
	if (l>0)
	{
		cout<<"\n100 notes are = "<<l;
	}
	if(p>0)
	{
		cout<<"\n50 notes are = "<<p;
	}
	if(x>0)
	{
		cout<<"\n20 notes are = "<<x;
	}
	if(z>0)
	{
		cout<<"\n10 notes are = "<<z;
	}
}
