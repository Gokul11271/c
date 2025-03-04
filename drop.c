#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<string.h>
#include<graphics.h>
#include<math.h>
char t[200],str[10][20];
int x[10],y[10],j=0;
void drop(int k)
{
int i,p,s;
for(p=60;p<=440;p++)
{
delay(50);
cleardevice();
outtextxy(200,10,"TEXT ANIMATION");
outtextxy(200,30,"______________");
for(s=k+1;s<=j;s++)
for(i=k+1;i<=s;i++)
outtextxy(x[i],50,str[i]);
outtextxy(x[k],p,str[k]);
for(s=0;s<=k;s++)
for(i=0;i<=s-1;i++)
outtextxy(x[i],440,str[i]);
}
}
void main()
{
int gd=DETECT, gm=0;
int i=0,k=0,m=0,m1,in=1,l;
int p;
clrscr();
initgraph(&gd,&gm,"c:\\tc\\bgi");
settextstyle(1,0,2);
printf("\n ENTER THE SENTENCE:");
gets(t);
l=strlen(t);
while(i<l)
{
if(t[i]!=' ')
{
str[j][k]=t[i];
k++;
i++;
}
else
{
j++;
i++;
k=0;
}
}
cleardevice();
x[0]=m;
y[0]=50;
outtextxy(200,10,"TEXT ANIMATION");
outtextxy(200,30,"______________");
for(i=0;i<=j;i++)
{
m1=textwidth(str[i]);
outtextxy(m,50,str[i]);
m=m+m1+10;
x[in]=m;
y[in]=10;
in++;
}
settextstyle(6,0,1);
outtextxy(0,100,"PRESS ANY KEY TO DROP...");
getch();
settextstyle(1,0,2);
for(i=0;1<=j;i++)
drop(i);
getch();
closegraph();
}
