 #include<iostream>
using namespace std;
void prime()
{
	int i,c=0,n;
	cout<<"enter no";
	cin>>n;
	for(i=1;i<=n/2;i=i+1)
	{
		if(n%i==c)
		{
		c=c+1;
	    }
    }
	    if(c==1)
		{
		cout<<"n is prime";
     	}
		else
		{
		cout<<"n is not prime";
	    }
}
 main()
{
	prime();
}
