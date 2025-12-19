#include<iostream>
using namespace std;
int main()
{
	int u_input;
	int amount,count;
	
	while(true)
	{

	cout<<"press 1 for rickshaw"<<"\n";
	cout<<"press 2 for car"<<"\n";
	cout<<"press 3 for bus"<<"\n";
	cout<<"press 4 for show the record"<<"\n";
	cout<<"press 5 for elete the record"<<"\n";
	cin>>u_input;
	
	if(u_input==1)
	{
		amount = amount + 100;
		count = count+1;
	}
	else
	if(u_input==2)
	{
		amount = amount + 200;
		count = count+1;
	}
	else
	if(u_input==3)
	{
		amount = amount + 300;
		count = count+1;
	}
	else
	if(u_input==4)
	{
	cout<<"The total amount =" <<amount<<"\n";
	cout<<"The total number vehicles parked ="<<count<<"\n";
	}
	else
	if(u_input==5)
	{
		amount = 0;
		count = 0;
	}
	else{
		cout<<"Invalid number"<<"n";
	}
}
	return 0;
	
}
