#include<iostream>
using namespace std;
struct Bank
{
	private: 
	        int accountid;
	        string name;
	        float balance;
	        int amount;
	public:
		void input()
		{
			cout<<"enter acc id : ";
			cin>>accountid;
			cout<<"enter name : ";
			cin>>name;
			cout<<"enter balance : ";
			cin>>balance;
			
		}
	    void withdraw()
	{
		cin>>amount;
		if(balance-amount>=1000)
		{
			balance=balance-amount;
		}
		else
		{
			cout<<"insufficient balance";
		}
	}
	    void deposit()
	{
		cin>>amount;
		
		balance=balance+amount;
		cout<<balance;
	}
	    void display()
	{
		cout<<"account id : "<<accountid;
		cout<<"\nname : "<<name;
		cout<<"\nbalance : "<<balance;
	}
};
main ()
{
	Bank b;
	b.input();
	b.display();
	int ch;
	while(1)
	{
		cout<<"press 1 to withdraw";
		cout<<"\n"<<"press 2 to deposit";
		cin>>ch;
		if(ch==1)
		{
			b.withdraw();
		}
		if(ch==2)
		{
			b.deposit();
		}
		else if(ch>2)
		{
			break;
		}
	}
}
