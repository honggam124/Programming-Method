#include <stdio.h>

void cvday(int d);
void main()
{
    int d;
    printf("Nhap so ngay: ");
    scanf("%d",&d);
    cvday(d);
}
void cvday(int d)
{
    int y;
    y = d/365;
    int w;
    w = (d%365)/7;
    d = (d%365)%7;
    printf("%d nam, %d tuan, %d ngay",y,w,d);
}