#include<iostream>
using namespace std;
class size
{
	int m,cm;
	public:
	void input()
		{
			cout<<" enter size";
			cin>>m>>cm;
		}
		void output()
		{
			cout<<" enter m or cm";
			cin>>m>>cm;
		}
		void conversion(size s2)
		size s3;
		s3.m+s2.m+(cm+s2.cm)/100;
		s3.cm=(cm+s2.cm)%100;
		cout<<"size of m and cm"<<s2.m<<"&"<<s.cm<<"\n";
		}
	
		};
		 demo d1,d2;
	 d1.input();
     d2.input();
	 d1.output();
	 d2.output();
