#include<iostream>
using namespace std;
struct array
{
	private:
		int a[3];
	
		public:
		 void input(){
		cout<<"enter number";
			for(int i=0;i<3;i=i+1)
			{
				cin>>a[i];
				
			}
		for(int i=0;i<3;i=i+1)
			{
				cin>>a[i];
			}
		}
		void minimum(){
		
			int min;
			min=a[0];
			for(int i=0;i<3;i=i+1){
				int(min>s[i]);
				min=s[i];
			}
		}
	
	void maximum(){
	
			int max;
			max=[0];
			for(int i=0;i<3;i=i+1){
				int(max<s[i]);
				max=s[i];
				
			}
		}
	};
		main()
		{
			array d;
			d.input();
			d.minimum();
			d.maximum();
		
		}
