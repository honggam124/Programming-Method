#include <stdio.h>
#define pi 3.14
void main()
{
    float cv;
    float S;
    float r;
    printf("Nhap chu vi: ");
    scanf("%f",&cv);
    r = cv/(2*pi);
    S = r*r*pi;
    printf("Dien tich: %f",S);
}