#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
#include<dos.h>
void main()

{
int driver=DETECT,mode;
initgraph(&driver,&mode,"C:\\TurboC3\\BGI");

circle(339,220,150);
circle(260,180,20);
circle(405,180,20);

line(330,180,310,230);
line(310,230,350,230);
line(330,180,350,230);


rectangle(250,315,430,290);

getch();

closegraph();
}