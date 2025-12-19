#include<stdio.h>
#include<conio.h>
#include<dos.h>

main()
{
 clrscr();
 sound(555);
 delay(2000);
 sound(666);
 delay(2000);
 sound(444);
 delay(2000);
 sound(350);
 delay(2000);
 nosound();
 getch();

}