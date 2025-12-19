#include<iostream>
using namespace std;
class student

{
	private:
	int r;
	string name;
	float m1,m2,m3;
	
	public:
		void input()
		{
			cout<<"roll no";
			cin>>r;
			cout<<"name";
			cin>> name;
			cout<<"marks";
			cin>>m1>>m2>>m3;
			
		}
		void cal()
		{
		float t,p;
		cout<<"total=";
		t=m1+m2+m3;
		cout<<"percentage=";
		p=(t/300)*100;
		cout<<p;
		if(p>90&&p<100)
		{
			cout<<"grade A";
			
		}
	}
};
		main()
		{
			student d;
			d.input();
			d.cal();
		
		}
