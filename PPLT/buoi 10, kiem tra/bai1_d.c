#include <stdio.h>
#include <math.h>

void main()
{
    float xa,ya,xb,yb;
    printf("Nhap xA: ");
    scanf("%f",&xa);
    printf("Nhap yA: ");
    scanf("%f",&ya);

    printf("Nhap xB: ");
    scanf("%f",&xb);
    printf("Nhap yB: ");
    scanf("%f",&yb);

    float d;
    d = sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb));
    printf("d=%f",d);
}