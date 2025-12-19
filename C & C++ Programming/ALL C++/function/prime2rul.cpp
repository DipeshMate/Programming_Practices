 #include<iostream>
using namespace std;

void prime(int n)
{
	int i,c=0;
	for(i=1;i<=n/2;i=i+1)
	{
		if(n%i==c)
		{
		c=c+1;
	    }
    }

    count<<"c="<<c;
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
	int n;
	cout<<"enter no";
	cin>>n;
	prime(n);
}
