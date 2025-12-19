#include<iostream>
using namespace std;
main()
{
 string s;
 int i,c=0,d=0;
 cout<<"enter string";
 cin>>s;
 for(i=0;i<s.length();i++)
{
 {
   if(s[i]>=65&&s[i]<=90)
 c=c+1;
}
   if(s[i]>=90&&s[i]<=122)
 d=d+1;
}

cout<<"uppercase value"<<c<<"\n";
cout<<"lowercase value"<<d;

if(c<d){
	cout<<"\n"<<"uppercase more";
}
if(d<c){
	cout<<"\n"<<"lowercase more";
}
if(c==d){
	cout<<"\n"<<"both are equal";
}
}

