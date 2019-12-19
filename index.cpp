#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{
int gd,gm;
float x,y,x1,y1,x2,y2,dx,dy,length,i;
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"C:\\TC\\BGI");
cout<<"Enter THe x1 and y1:";
cin>>x1>>y1;
cout<<"Enter THe x2and y2:";
cin>>x2>>y2;
dx=abs(x2-x1);
dy=abs(y2-y1);
if(dx>dy)
{
length=dx;
}
else
{
length=dy;
}
dx=(x2-x1)/length;
dy=(y2-y1)/length;
x=x1+0.5;
y=y1+0.5;
i=1;
while(i<=length)
{
putpixel(x,y,RED);
x=x+dx;
y=y+dy;
i=i+1;
}
getch();
}
