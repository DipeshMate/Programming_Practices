#include<iostream>
using namespace std;
void show(int a)
{
	int b,c,i;
	while(1)
	{
		a=a+1;
		c=0;
		for(i=1;i<=a;i++)
		{
			if(a%i==0)
			{
				c=c+1;
			}
	    }
		if(c==2)
		{
			cout<<a;
			break;
	    }
		
	    
	    
	}
}
main()
{
	int a;
	cin>>a;
	show(a);
}
