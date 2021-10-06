//*1114-Aary Jadhav*//
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void main()
{
  int gd=DETECT,gm;
  initgraph(&gd,&gm,"C:\\TurboC3:\\BGI");
  line(100,150,250,150);
  line(100,180,250,180);
  line(100,150,100,180);
  line(250,100,250,150);
  line(250,230,250,180);
  line(300,160,250,100);
  line(300,160,250,230);
  getch();
  closegraph();
}
