#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
main()
{
	int z;
	vector<int>v;
	while(1)
	{
		cin>>z;
		if(z==-1)
		{
			break;
		}
		v.push_back(z);
	}
}
