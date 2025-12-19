#include<stdio.h>
#include<conio.h>

main()
{
int a=4,b=5,c,d,e;
clrscr();
c=a+b;
d=a*b;
e=a/b;
textattr(GREEN);
textbackground(RED);
gotoxy(20,4);
cprintf("add=%d\n multiply=%d\n divide=%d",c,d,e);
getch();

}