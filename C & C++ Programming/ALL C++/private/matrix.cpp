#include<iostream>
using namespace std;
class matrix
{

		int a[3][3];
		public:
			void input(){
			int i,j;
			cout<<"enter matrix"<<"\n";
			for( i=0;i<3;i=i+1)
			{
				for( j=0;j<3;j=j+1){
				
				cin>>a[i][j];
			}
			cout<<"\n";
			}
			
		
	
		}
			void transpose()
			{
				int i,j;
				cout<<"transpose of matrix";
			for( i=0;i<3;i=i+1)
			{
				for( j=0;j<3;j=j+1){
				
					cout<<a[j][i];
			}
			cout<<"\n";
		}
			}
			void row()
			{ 
			int i,j,sum=0;
				for( i=0;i<3;i=i+1)
			{
				for( j=0;j<3;j=j+1){
				
					sum=sum+a[i][j];
			}
			cout<<sum<<"\n";
			sum=0;
		
			}
				
			}
				
		
				void column()
			{ 
			int i,j,sum=0;
				for(int i=0;i<3;i=i+1)
			{
				for(int j=0;j<3;j=j+1){
				
					sum=sum+a[j][i];
			}
			cout<<sum<<"\n";
			sum=0;
		
			}
			
			}
				
			
		};
		main()
		{
			matrix m;
			m.input();
			m.transpose();
			m.row();
			m.column();
	}
		
