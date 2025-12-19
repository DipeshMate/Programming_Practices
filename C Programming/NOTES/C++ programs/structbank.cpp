#include<iostream>
#include<string.h>
using namespace std;
struct bank
{
	private:
		string name;
		float bal;
		int id;
	public:
		void input()
		{
			cout<<"enter the name of account holder: ";
			cin>>name;
			cout<<"\n"<<"enter account id: ";
			cin>>id;
			cout<<"\n"<<"enter the balance: ";
			cin>>bal;
			if(bal<1000)
			{
				cout<<"insufficient balance";
			}
		}
		void diplay()
		{
			cout<<"\n"<<"name of account holder: "<<name;
			cout<<"\n"<<"account id: "<<id;
			if(bal>1000)
			{
			cout<<"\n"<<"available balance: "<<bal;
		    }
		    else
		    {
		    	cout<<"\n"<<"insufficient balance";
			}
		}
		void deposit()
		{
			float amount,c,b,n;
			cout<<"\n"<<"enter the amount: ";
			cin>>amount;
			bal=(amount+bal);
			cout<<"\n"<<"total balance: "<<c;
			while(c<1000)
			{
				b=1000-(c);
				cout<<"\n"<<"insufficient balance"<<"\n"<<"Deposit the given minimum amount: "<<b;
				cout<<"\n"<<"deposit some more amount: ";
				cin>>n;
				c=(n+c);
				cout<<"\n"<<c;
			}
		}
		void withdraw()
		{
			float a1,c1,b1;
			cout<<"\n"<<"enter the amount you want to withdraw: ";
			cin>>a1;
			if((bal-a1)>1000)
			{
				cout<<"\n"<<"the remaining balance is: "<<(bal-a1);
				bal=bal-a1;
			}
			else if((bal-a1)<1000)
			{
				cout<<"\n"<<"insufficient balance";
			}
		}
};
main()
{
	bank d;
	d.input();
	d.deposit();
	d.withdraw();
}
