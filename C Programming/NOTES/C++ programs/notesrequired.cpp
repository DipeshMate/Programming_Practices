#include<iostream>
using namespace std;
main()
{
	int a,b=500,c=200,d=100,e=50,f=20,g=10,x,y,z,i,j,k,l;
	cout<<"enter a 4 digit amount = ";
	cin>>a;
	x=a/b;
	y=(a%b)/c;
	z=((a%b)-(c*y));
	i=(z/d);
	j=(z/e);
	l=(j/f);
	k=(z-(j*e))/g;
	cout<<"number of notes required are = "<<(x+y+i+j+l+k);
}
