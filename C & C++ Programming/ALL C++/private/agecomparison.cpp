#include<iostream>
using namespace std;
class person
{
	int age;
	string name;
	public:
	void input()
		{
				
			cout<<" enter name";
			cin>>name;
			cout<<" enter age";
			cin>>age;
		}
		void display()
		{
			cout<<" enter name";
			cout<<name;
			cout<<" enter age";
			cout<<age;
		}
		void coparison(person p2,person p3)
		{
			
			if(age>p2.age&&p3.age)
			{
				cout<<("person 1 is greater");
			}
				else if(p2.age>age&&p2.age>p3.age)
				{
					cout<<("person 2 is greater");
				}
					else if(p3.age>age&&p3.age>p2.age)
				{
					cout<<("person 3 is greater");
				}
			}
			
		
	};
	main()
	{ 
	person p1,p2,p3;
	p1.input();
	p2.input();
	p3.input();
	p1.display();
	p2.display();
	p3.display();
	p1.coparison(p2,p3);
	
	}
		
