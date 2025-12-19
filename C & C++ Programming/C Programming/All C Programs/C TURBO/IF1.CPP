#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

void main()   {

clrscr();
int gdriver = DETECT,gmode;
int x,y,i;
      initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI");
      x=getmaxx()/2;
      y=getmaxx()/2;
      for(i=30;i<200;i++)
      {
	  delay(50);
	  nosound();
	  setcolor(i/10);
	  arc(x,y,0,180,i-10);
	  sleep(0);

      }
getch();

}