#include<iostream>
using namespace std;
class employee
{
	int id;
	string name;
	float salary;
	long mob;
	string address;
	string department;
	public:
		employee()
		{
			id=101;
			name= "sohan";
			salary=9000;
			mob=70240573981;
			address="bhilai";
			department="cs";
		}
		employee(int idno,string n,float s,long m,string add,string dep)
		{
			id=idno;
			name=n;
			salary=s;
			mob=m;
			address=add;
			department=dep;
		}
		employee(employee &e)
		{
			id=e.id;
			name=e.name;
			salary=e.salary;
			mob=e.mob;
			address=e.address;
			department=e.department;
		}
		void show()
		{
			cout<<"id="<<id<<"\n";
			cout<<"name="<<name<<"\n";
		    cout<<"salary="<<salary<<"\n";
		    cout<<"mob="<<mob<<"\n";
		    cout<<"address="<<address<<"\n";
		     cout<<"department="<<department<<"\n";
	    }
	};
	main()
	{
		employee e1,e2(103,"om",9000,7024513981,"smritinagar","cs"),e3(e2);
		e1.show();
		e2.show();
		e3.show();
	}
