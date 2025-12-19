#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int a[50],n,i,sno;
	printf("enter the size of list");
	scanf("%d",&n);
	printf("enter %d no.",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
		printf("enter the no to be search");
		scanf("%d",&sno);
		for(i=0;i<n;i++)
		{
			if(sno==a[i])
			{
				printf("%d enter at location%d",sno,i+1);
				break;
				}
		}
		if(i==n)
		{
			printf("it isnot present in the list");
		}
	}
