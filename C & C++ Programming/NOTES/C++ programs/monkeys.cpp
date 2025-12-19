#include<iostream>
using namespace std;
main()
{
	int monkey,banana,peanut,baneat,peaeat,x,y,i,j,sum,mleft;
	cout<<"enter the number of monkeys,bananas and peanuts = ";
	cin>>monkey>>banana>>peanut;
	cout<<"enter the max banana eat=";
	cin>>baneat;
	cout<<"enter the max peanut eat=";
	cin>>peaeat;
	// a monkey can either eat max of baneat or max of peaeat (not both)
	x=(banana/baneat);
	y=(peanut/peaeat);
	i=(banana%baneat);
	j=(peanut%peaeat);
	if (i>0 or j>0)
	{
		sum=(x+y+1);
		mleft=(monkey-sum);
		cout<<mleft;
	}
	else if (i==0 and j==0)
	{
		sum=(x+y);
		mleft=(monkey-sum);
		cout<<mleft;
	}
 } 
