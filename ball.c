#include<dos.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>
void main()
{
int gd=DETECT,gm,k;
float x=1 ,y=120.00000,j=.5,count=.1;
float r=10,i;
initgraph(&gd,&gm,"c:\\tc\\bgi");
setcolor(10);
line(0,415,650,415);
sleep(1);
for(k=0;k<=7;k++)
{
for(i=90;i<270;i+=10)
{
y=cos(((i*22/7)/180))/j;
if(y>0)
y=-y;
x+=5;
setcolor(10);
setfillstyle(1,10);
circle(x,y*100+400,10);
delay(100);
nosound();
setcolor(0);
setfillstyle(1 ,10);
circle(x,y*100+400,r);
floodfill(x,y*100+400,0);
}
sound(150);
j+=count;
count+=.1;
}
nosound();
getch();
closegraph();
}
