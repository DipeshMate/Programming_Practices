#include<iostream>
using namespace std;
class student
{

		int r; 
		string name;
		float m;
		public:
	 void input()
		{
			cout<<"enter roll no";
			cin>>r;
			cout<<" enter name";
			cin>>name;
			cout<<"enter mark";
			cin>>m;
		}
		void display()
		{ 
		cout<<"roll no"<<r<<"\n";
				cout<<"name"<<name<<"\n";
						cout<<"mark"<<m<<"\n";
		}
	};
		main()
		{
				student s[5];
			int i;
		
			for(i=0;i<=5;i=i+1)
			{
				s[i].input();
			}
				for(i=0;i<=5;i=i+1)
			{
				s[i].display();
			}
				}		
