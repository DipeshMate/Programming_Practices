#include<iostream>
using namespace std;
void show(int i)
{
	int n,r,sum=0,temp;
	cout<<"enter number";
	cin>>n;
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=(sum*10)+r;
		n=n/10;
	}	
	if(temp==sum)
	cout<<"number is palindrom";
	else
	cout<<"number  is not palindrom";
	
}
void show(int a,int b)
{
	int n;
	for(n=a;n<=b;n=n+1)
{
	for(i=1;i<=n/2;i=i+1)
	{
		if(n%i==0)
		{
			c=c+1;
			
		}
		if(c==1){
			cout<<n<<"is prime no";
		}
		else
		cout<<n<<"is not prime"
		}
	}
}
void show(int a, int b)
{
	cout<<"enter first no"<<"\n";
	cin>>a;
	cout<<" enter second no"<<"\n";
	cin>>b;
  if(a>b)
	{
		cout<<" a is greater"<<"\n";
	}
	else
{
	
cout<<"bis greater"<<"\n";
}
}

}
int main()
{
	palindrome();
}
