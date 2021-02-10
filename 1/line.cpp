#include <graphics.h> 
#include <stdlib.h>
int main() 
{ 
	int gd = DETECT, gm;
	char driver[] = "";
	initgraph(&gd, &gm,driver);
	line(0,10,100,10);
	char li[] = "Line";
	outtextxy(25,15,li);
	circle(180,50,40);
	rectangle(240,10,300,80);
	line(360,10,310,80);
	line(310,80,410,80);
	line(360,10,410,80);
	getch();
	closegraph();
	return 0; 
} 
