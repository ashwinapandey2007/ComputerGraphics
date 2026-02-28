#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
    int gd = DETECT, gm;
    int x1, y1, x2, y2;
    int tx, ty;
    int x3, y3, x4, y4;
    initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
    printf("Enter the starting point of line segment: ");
    scanf("%d %d", &x1, &y1);
    printf("Enter the ending point of line segment: ");
    scanf("%d %d", &x2, &y2);
    printf("Enter translation distances tx and ty: ");
    scanf("%d %d", &tx, &ty);
    setcolor(RED);
    line(x1, y1, x2, y2);
    outtextxy(x2 + 5, y2 + 5, "Original Line");
    x3 = x1 + tx;
    y3 = y1 + ty;
    x4 = x2 + tx;
    y4 = y2 + ty;
    setcolor(GREEN);
    line(x3, y3, x4, y4);
    outtextxy(x4 + 5, y4 + 5, "Translated Line");
    getch();
    closegraph();
    return 0;
}