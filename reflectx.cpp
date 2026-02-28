#include <stdio.h>
#include <conio.h>
#include <graphics.h>
int PolygonPoints[3][2] = {{10,100}, {110,100}, {110,200}};
void DrawPolygon(int points[3][2], int color, char *label)
{
    int i;
    setcolor(color);
    for(i = 0; i < 3; i++)
    {
        line(points[i][0], points[i][1],
             points[(i+1)%3][0], points[(i+1)%3][1]);
    }
    outtextxy(points[1][0]+5, points[1][1]+5, label);
}
void DrawAxes()
{
    setcolor(WHITE);
    line(0, 240, 640, 240);  
    line(320, 0, 320, 480); 
}
void ReflectX(int points[3][2], int reflected[3][2])
{
    int i;
    int y_axis = 240; 
    for(i = 0; i < 3; i++)
    {
        reflected[i][0] = points[i][0];
        reflected[i][1] = 2*y_axis - points[i][1];
    }
}
int main()
{
    int gDriver = DETECT, gMode;
    int i;
    initgraph(&gDriver, &gMode, "C:\\TurboC3\\BGI");
    cleardevice();
    for(i = 0; i < 3; i++)
    {
        PolygonPoints[i][0] += 320;       
        PolygonPoints[i][1] = 240 - PolygonPoints[i][1]; 
    }
    DrawAxes();  
    DrawPolygon(PolygonPoints, RED, "Original Polygon");
    int ReflectedPoints[3][2];
    ReflectX(PolygonPoints, ReflectedPoints);
    DrawPolygon(ReflectedPoints, GREEN, "Reflected Polygon");
    getch();
    closegraph();
    return 0;
}