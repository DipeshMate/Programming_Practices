#include<iostream>
using namespace std;
main()
{
 string name;
 int i,c=0;
 cin>>name;
  for(i=0;i<name.length();i++)
 { 
 if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'||name[i]=='A'||name[i]=='E'||name[i]=='I'||name[i]=='O'||name[i]=='U')
 {
 	c++;
 }
 }
 cout<<c<<"\n";
}
