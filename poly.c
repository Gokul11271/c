#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void main()
{
int gdrive=DETECT,gmode;
int a[10],i,j,n,x,y,b;
clrscr();
initgraph(&gdrive, &gmode,"c:\\tc\\bgi");
printf("\n\tENTER THE NO. OF POINTS USED:");
scanf("%d",&n);
for(i=0,j=0;i<n;i++,j+=2)
{
printf("\n\tENTER THE COORDINATE POINTS:");
scanf("%d%d",&a[j],&a[j+1]);
}
setcolor(10);
fillpoly(n,a);
printf("\n\tENTER THE FINDING PIXEL CO-ORDINATE VALUES:");
scanf("%d%d",&x,&y);
b=getpixel(x,y);
putpixel(x,y,2);
printf("\n%d",&b);
if(b==15)
printf("\n\tGIVEN PIXEL IS INSIDE THE POLYGEN");
else
if(b==10)
printf("\n\tGIVEN PIXEL IS ON THE POLYGEN");
else
printf("\n\tGIVEN PIXEL IS OUTSIDE THE POLYGEN");
getch();
closegraph();
}
