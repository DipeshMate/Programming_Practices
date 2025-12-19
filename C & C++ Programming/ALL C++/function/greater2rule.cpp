#include<iostream>
using namespace std;
void greater_no(int a, int b)
{
  if(a>b)
	{
		cout<<" a is greater"<<"\n";
	}
	else
{
	
cout<<"bis greater"<<"\n";
}
}
int main() 
{ 
	int a,b;
    cout<<"enter first no"<<"\n";
	cin>>a;
	cout<<" enter second no"<<"\n";
	cin>>b;
greater_no(a,b);
}


