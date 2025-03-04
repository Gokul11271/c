#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int midx,midy,maxx,maxy;
void displaycar(int c,int k)
{
setcolor(c);
ellipse(50+k,midy+40,0,360,10,10);
ellipse(100+k,midy+40,0,360,10,10);
line(60+ k,midy+40,90+k,midy+40);
line(20+k,midy+40,40+k,midy+40);
line(110+k,midy+40,130+k,midy+40);
line(20+k,midy+40,20+k,midy+20);
line(130+k,midy+40,130+k,midy+20);
line(20+k,midy+20,30+k,midy+20);
line(130+k,midy+20,100+k,midy+20);
line(30+k,midy+20,30+k,midy);
line(100+k,midy+20,100+k,midy);
line(30+k,midy,100+k,midy);
}
void main()
{
int gd=DETECT,gm;
int k=20;
initgraph(&gd,&gm,"c:\\tc\\bgi");
midx=(maxx=getmaxx())/2;
midy=(maxy=getmaxy()) /2;
line(0,midy-50, maxx,midy- 50);
line(0,midy+51 ,maxx,midy+51);
setbkcolor(0);
while(!kbhit())
{
displaycar(5,k);
sound(700);
delay(50);
displaycar(0,k-5);
k+=5;
if(k>=maxx)
k=-20;}
nosound();
getch();
}