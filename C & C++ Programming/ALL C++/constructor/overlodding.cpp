#include<iostream>
using namespace std;
class array
{
	
	int a[5];
	public:
	void input()
		{
		int i;
		cout<<"enter the element";
		for(i=0;i<=5;i=i+1)
		{
		
		cin>>a[i];
		}
       }
 array operator+(array x2)
{
	array x3;
	int i;
for(i=0;i<5;i=i+1)
{
	x3.a[i]=a[i]+x2.a[i];
	}
	return x3;
}
array operator==(array x2)
{
	array x4;
	int i,j;
for(i=0;i<5;i=i+1)
{
for(j=0;j<5;j=j+1)
{
	if(a[i]==x2.a[j])
	{
	cout<<a[i]<<"\n";
	}
 }
}
	return x4;
}
void show()
{
	int i;
	for(i=0;i<5;i=i+1) 
	{
		cout<<a[i]<<"\n";
	}
	cout<<"\n";
}
};
main()
{
	array x1,x2;
	x1.input();
	x2.input();
	cout<<"addition array element"<<"\n";
	array x3;
	x3=x1+x2;
	x3.show();
    cout<<"common array element"<<"\n";
    array x4;
    x4=x1==x2;
    x4.show();
}


