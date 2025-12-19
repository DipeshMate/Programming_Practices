#include<iostream>
using namespace std;
main()
{
	
		
			int x;
			cout<<"enter the weight in grams = ";
			cin>>x;
			if(x>0.5 and x<2000)
			{
				cout<<"Time estimated= 25 minutes";
			}
			else if (x>=2000 and x<4000)
			{
				cout<<"Time estimated= 35 minutes";
			}
			else if (x>=4000 and x<=7000)
			{
				cout<<"Time estimated= 45 minutes";
			}
			else if (x>7000)
			{
				cout<<"OVERLOADED";
			}
			else 
			{
				cout<<"INVAID INPUT";
			}
		
}
