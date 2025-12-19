#include<iostream>
using namespace std;
struct greatest
{
	int a,b,c;
	
};
main()
{
	greatest g;

	cin>>g.a>>g.b>>g.c;
	cout<<"\n";
	if(g.a>g.b&&g.a>g.c){
		cout<<"a is greater";
		}
	  else if(g.b>g.a&&g.b>g.c){
			cout<<"b is greater";
		}
		else if(g.c>g.a&&g.c>g.b){
			cout<<" c is greater";
		}
		
	
}
