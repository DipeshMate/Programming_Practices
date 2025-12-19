#include<iostream>
using namespace std;
main()
{
char c;
cin>>c;
cout<<"enter the character"<<"\n";
if(c>=65&&c<=90)
{
	cout<<"upper case";
}
else if(c>=97&&c<=122)
{
	cout<<"lower case";
}
else if(c>=48&&c<=57)
{
	cout<<"integer";
}
else
{
cout<<"special character";
}
}

