#include<iostream>
using namespace std;
void show(int a)
{
	int b,c,i;
	while(a!=0)
	{
		b=a%10;
		while(1)
		{
			b=b+1;
			c=0;
			for(i=1;i<=b;i++)
			{
				if(b%i==0)
				{
					c=c+1;
				}
			}
			if(c==2)
			{
				cout<<b;
				break;
			}
		}
		a=a/10;
	}
}
void show(int a,int b)
{
	int d,p=0,r=0,n,k=b;
	while(a!=0)
	{
		d=a%10;
		while(b!=0)
		{
			n=b%10;
			if(d==n)
			{
				cout<<"common elements are:-";
				cout<<d<< n;
			}
			b=b/10;
		}
		a=a/10;
		b=k;
	}
}
main()
{
	int a,b;
	cin>>a>>b;
	show(a);
	//show(a,b);
	
}
//result ulta aayega kyunki b=a%10; likha hua to numbers last to first jayenge.Agar sidha result lana hai to input number ko reverse kro aur phir uske upar operation kro.
