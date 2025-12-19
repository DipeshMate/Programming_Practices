#include<iostream>
using namespace std;
int main() 
{ 
int a,b,m=9;
cout<<"Enter the number";
cin>>a;

while(a!=0){
	b=a%10;
	if(m>b)
	{
		m=b;
	}
	a=a/10;
}
cout<<m;

	return 0;
}
