#include<iostream>
using namespace std;
int main() 
{ 
int i,n,sum=0;
cin>>n;

for(i=1;i<=n/2;i=i+1){
	if(n%i==0){
		cout<<i<<"\n";
	
	sum=sum+i;
}

}
cout<<"\n sum= "<<sum;
	return 0;
}
