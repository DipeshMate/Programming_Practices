#include<iostream>
#include<iterator>
#include<map>
using namespace std;
main()
{
	map<int,int>quiz;
	// inserting elements.....
	quiz.insert(pair<int,int>(1,10));
	quiz.insert(pair<int,int>(2,20));
	quiz.insert(pair<int,int>(3,30));
	quiz.insert(pair<int,int>(4,40));
	quiz.insert(pair<int,int>(5,50));
	// printing elements (similar to vectors)
	map<int,int>:: iterator i;
	cout<<"\nThe map quiz is : \n";
	cout<<"\tKEY\tELEMENT\n";
	for(i=quiz.begin();i!=quiz.end();i++)
	{
		cout<<'\t'<<i->first
		    <<'\t'<<i->second<<'\n';
	}
}
