#include<stdio.h>

int main()
{
	
int trainee[3][3];
int average[3]={0};
int i,j,max=0;

printf("INPUT VALUES:-\n");
for(i=1;i<=3;i++)
{
	printf("Round %d\n",i);
for(j=1;j<=3;j++)
{
		printf("Oxygen Value of Trainee %d:-",j);
		scanf("%d",&trainee[i][j]);
		if(trainee[i][j]<1 || trainee[i][j]>100 )		
{
	trainee[i][j]=0;
}
}

}

for(i=1;i<=3;i++)
{
for(j=1;j<=3;j++)
{
	average[i]=average[i]+trainee[j][i];
}
	average[i]=average[i]/3;
}

for(i=1;i<=3;i++)
{
	if(average[i]>max)
	{
	max = average[i];	
	}
	{
		printf("Trainee number: %d\n",i);
	}
	if(average[i]<70)
	{
		printf("Trainee is unfit\n");
	}
}
return 0;



//
//printf("ROUND 1 %d");
//scanf("%d %d %d \n",&a1,&b1,&c1);
//printf("ROUND 2 %d");
//scanf("%d %d %d \n",&a2,&b2,&c2);
//printf("ROUND 3 %d");
//scanf("%d %d %d",&a3,&b3,&c3);
//
//
//if(a1>=1 && a1=1 && b1=1 && c1=1 && a2=1 && b2=1 && c2=1 && a3=1 && b3=1 && c3<=100)
//
////calculate Average Oxygen
//t1=a1+b1+c1/3;
//printf("t1:%d\n",t1);
//t2=a2+b2+c2/3;
//printf("t2:%d\n",t2);
//t3=a3+b3+c3/3;
//printf("t3:%d\n",t3);
//
////checking Average less than 70
//
//if(t1<70 && t2<70 && t3<70 && t1>t3)
//
//if(t1==o)
//{
//	printf("Trainees number:1\n");
//}
//if(t2==o)
//{
//	printf("Trainees number:2\n");
//}
//if(t3==o)
//{
//	printf("Trainees number:3\n");
//}
//else
//{
//	printf("INVALID INPUT");
//}
//return 0;
}




