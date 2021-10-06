#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
#include<dos.h>
void main()

{
int driver=DETECT,mode;
initgraph(&driver,&mode,"C:\\TurboC3\\BGI");
setcolor(WHITE);
rectangle(100,150,280,220);
setfillstyle(SOLID_FILL,WHITE);
circle(140,250,30);
setfillstyle(SOLID_FILL,WHITE);
circle(240,250,30);
setfillstyle(SOLID_FILL,WHITE);
getch();
closegraph();
}

