#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
main()
{
	
	vector<int>v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	vector<int>::iterator i;
	for(i=v.begin();i<v.end();i++)
	{
		cout<<*i;
	}
}
