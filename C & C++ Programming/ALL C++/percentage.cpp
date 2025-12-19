#include<iostream>
using namespace std;
int main()
{
	int m1,m2,m3,T,p;
	cout<<"enter marks of three subject";
	cin>>m1>>m2>>m3;
	T=  m1+m2+m3;
	p= T*100/300;
	if(p>=75&&p<=100)
cout<<"A";
	if(p>=60&&p<=75)
	cout<<"B";
    
	if(p>=40&&p<=60)	
	cout<<"c";
	return 0;
}
	
