#include<iostream>
using namespace std;
class bank
{

		int aid; 
		string name;
		float bal;
		public:
			
		void input()
		{
			cout<<"enter amount";
			cin>>aid;
			cout<<" enter name";
			cin>>name;
			cout<<"enter balance";
			cin>>bal;
		}
		void display()
		{ 
		cout<<"amount"<<aid<<"\n";
				cout<<"name"<<name<<"\n";
						cout<<"balance"<<bal<<"\n";
		}
	
	void withdraw()
	{
		int amount;
		cout<<" ampount withraw";
		cin>>amount;
		if( bal-amount>=1000)
		{
		
		bal=bal-amount;
		cout<<"left balance"<<bal<<"\n";
		}
		else
		{
			cout<<"insuficient balance";
		}
	}
			void diposit()
	{
		int diposit;
		cout<<" ampount withrow";
		cin>>diposit;
		bal=bal+diposit;
		cout<<"total amount"<<bal;
		}
		
		};
	main()
	{
		bank b;
		b.input();
		b.display();
		b.withdraw();
		b.diposit();
	}
