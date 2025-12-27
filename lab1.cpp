#include <stdio.h> 
#include <graphics.h> 
#include <conio.h> 
int main()  
{ 
int gd = DETECT, gm; 
initgraph(&gd, &gm, ""); 
outtext("Graphics Mode Initialized Successfully"); 
putpixel(100, 100, 4);  
setcolor(BLUE); 
line(50, 50, 200, 50); 
setcolor(GREEN); 
rectangle(50, 100, 200, 200); 
setcolor(YELLOW); 
circle(300, 150, 50); 
setcolor(YELLOW); 
outtextxy(100, 100, "This is computer graphics lab"); 
getch(); 
closegraph(); 
return 0; 
}