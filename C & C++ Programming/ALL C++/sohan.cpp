#include<iostream>
using namespace std;
int main() 
{
	int a=2460,b,c,d,e,f,h,g;
	b=a/500;
	cout<<"\n b"<<b;
	a=a%500;
	
	c=a/200;
	cout<<"\n c"<<c;
	a=a%200;
    
	d=a/100;
    cout<<"\n d"<<d;
    a=a%100;
    
	e=a/50;
    cout<<"\n e"<<e;
    a=a%50;
    
     
	f=a/20;
    cout<<"\n f"<<f;
    a=a%20;
     
	h=a/10;
    cout<<"\n h"<<h;
    a=a%10;
    	

    g=c+e+f+h;
    cout<<"\n h"<<h;

return 0;
}
