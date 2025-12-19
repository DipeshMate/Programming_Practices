#include<iostream>
using namespace std;
int main() 
{ 
int i,a,b,sum=0;
cin>>a;
cin>>b;

for(i=a;i<=b;i=i+2){
	cout<<i<<"\n";
	sum=sum+i;

}
cout<<sum;

	return 0;
}
