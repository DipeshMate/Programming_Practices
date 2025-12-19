#include<iostream>
using namespace std;
class str
{
 
		string name;
		 int i,c=0;
		public:
	 void input()
		{
			cout<<" enter name";
			 cin>>name;
  for(i=0;i<name.length();i++)
 { 
 if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'||name[i]=='A'||name[i]=='E'||name[i]=='I'||name[i]=='O'||name[i]=='U')
 {
 	c++;
 }
 }
 cout<<c<<"\n";
}
		void display()
		{ 
				cout<<"name"<<name<<"\n";
						
		}
		void palindrom()
{
	int r,sum=0,temp;
	cout<<"check palindrom no";
	cin>>name;
	//temp=name;
	while(name>0)
	{
		r=n%10;
		sum=(sum*10)+r;
		name=name/10;
	}	
	if(temp==sum)
	cout<<"number is palindrom";
	else
	cout<<"number  is not palindrom";
	
}
	};
		main()
		{
				str s;
			    s.input();
		        s.display();
		        s.palindrom();

		    }
