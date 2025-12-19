#include<stdio.h>
#include<conio.h>

main()
{
clrscr();
textattr(GREEN);
cprintf("A\n");
textattr(BROWN);
cprintf("sh\n");
textattr(YELLOW);
printf("ok\n");

textbackground(WHITE);
cprintf("s\n");
textattr(GREEN);
cprintf("o\n");
textattr(WHITE);
cprintf("ni");
getch();

}