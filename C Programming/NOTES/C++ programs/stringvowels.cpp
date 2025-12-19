#include<iostream>
using namespace std;
main()
{
	string s;
	int i;
	cin>>s;
	cout<<"vowels are :- ";
	for(i=0;i<s.length();i++)
	{
		if(s[i]=='A' or s[i]=='a' or s[i]=='E'or s[i]=='e'or s[i]=='O' or s[i]=='o' or s[i]=='U' or s[i]=='u')
		{
			cout<<"\n"<<s[i];
		}
	}
}
