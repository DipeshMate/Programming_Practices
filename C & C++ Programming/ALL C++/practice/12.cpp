#include<iostream>
using namespace std;
int main() 
{ 
int a,b,sum=0;
cout<<"Enter the number";
cin>>a;

while(a!=0){
	b=a%10;
	cout<<b<<"\n";
	sum=sum+b;

}
cout<<"\n sum= "<<sum;

	return 0;
}
