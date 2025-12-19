#include<iostream>
#include<iterator>
#include<map>
using namespace std;
main()
{
	string name;
	int ch,ch1,i;
	long mobile;
	map<string,long>info;
	while(true)
	{
		
		cout<<"choose 1,2 or 3 : ";
		cin>>ch;
		if(ch==1)
		{
			cout<<"enter name : ";
			cin>>name;
			cout<<"\n"<<"enter mobile number = ";
			cin>>mobile;
			info.insert(pair<string,long>(name,mobile));
		}
		else if(ch==2)
		{
			map<string,long>::iterator i;
			cout<<"The map info is : \n";
			cout<<"\tNAME\tMOBILE\n";
			for(i=info.begin();i!=info.end();i++)
			{
				cout<<"\t"<<i->first<<"\t"<<i->second<<"\n";
			}
		}
		else if(ch==3)
		{
			map<string,long>::iterator i;
			cout<<"the names are : \n";
			cout<<"\tName\n";
			for(i=info.begin();i!=info.end();i++)
			{
				cout<<'\t'<<i->first<<'\n';
			}
		}
			else if(ch==4)
			{
				map<string,long>::iterator i;
				cout<<"The mobile numbers are : \n";
				cout<<"\tMobile number\n";
				for(i=info.begin();i!=info.end();i++)
				{
					cout<<"\t"<<i->second<<"\n";
				}
			}
			else if(ch>4)
			{
				break;
			}
		}
	}
