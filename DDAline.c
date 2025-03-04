#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<string.h>
void main()
{
float x,y,xl,yl,x2,y2,dx,dy,length;
int i,gd,gm;
clrscr();
printf("\nENTER THE VALUE OF(x 1 &yl ):");
scanf("%f%f",&xl ,&yl);
printf("\nENTER THE VALUE OF(x2&y2):");
scanf("%f%f",&x2,&y2);
detectgraph(&gd ,&gm);
initgraph(&gd ,&gm,"c:\\tc\\bgi");
dx=abs(x2-xl);
dy=abs(y2-yl);
if(dx<=dy)
length=dx;
else
length=dy;
dx=(x2-xl)/length;
dy=(y2-yl)/length;
x=xl+0.5;
y=yl+0.5;
i=1;
while(i<length)
{
putpixel(x,y,15);
x=x+dx;
y=y+dy;
i=i+1;
delay(100);
}
getch();
closegraph();
 }
