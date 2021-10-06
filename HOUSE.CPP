//*1114-Aary Jadhav*//
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
 int gdriver=DETECT,gmode;
 initgraph(&gdriver,&gmode,"C:\\TurboC3/BGI");
 //house
 line(100,100,150,50);
 line(150,50,200,100);

 line(150,50,350,50);
 line(350,50,400,100);

 rectangle(100,100,200,200);
 rectangle(200,100,400,200);

 getch();
 closegraph();
 }