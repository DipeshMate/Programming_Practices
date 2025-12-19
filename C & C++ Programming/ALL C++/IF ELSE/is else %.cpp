#include<stdio.h>

 main()
{

float m1,m2,m3,t,p;

printf("Enter subjects marks of student:\n");
scanf("%f %f %f",&m1,&m2,&m3);

t=m1+m2+m3;


p=t/300*100;
printf("%f \n",p);

if (p>=89)
{
	printf("Grade A");
}
else if (p>=79)
{
    printf("Grade B");
}
else if (p>=59)
{
	printf("Grade C");
}
else if (p>=39)
{
	printf("Grade D");
}
else 
	printf("\nFAIL");


return 0;

}
