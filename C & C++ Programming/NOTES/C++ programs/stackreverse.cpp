#include<iostream>
#include<stack>
using namespace std;
int main()
{
	int n,i,m,r=0,k;
	cout<<"enter the number of inputs u want = ";
	cin>>n;
	stack<int>stack;
	for(i=0;i<n;i++)
	{
		cout<<"enter element = ";
		cin>>m;
		stack.push(m);
	}
		while(!stack.empty())
		{
			cout<<" "<<stack.top();
			stack.pop();
		}
	
}
