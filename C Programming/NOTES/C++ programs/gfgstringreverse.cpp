#include<iostream>
#include<string.h>
using namespace std;
void stringreverse(string s)
{
	int i,spacecount=0,n;
	string word= "";
	string result= "";
	for(i=0;i<s.length();i++)
	{
		if(s[i]!=' ')
		{
			spacecount=0;
			word=word+s[i];
		}
		else if(s[i]==' ' or (i==0 && s[i]!=' '))
		{
			spacecount=spacecount+1;
			if(spacecount==1 && result.size()==0)
			{
				result=result+word;
				word="";
			}	
			else if(spacecount==1 && result.size()>0)
			{
				result=result+" "+word;
				word="";
			}
		}
	}
	cout<<result;
}
main()
{
	string s;
	cout<<"enter the string without spaces between the words (use dots instead of spaces) = ";
	cin>>s;
	stringreverse(s);
}
