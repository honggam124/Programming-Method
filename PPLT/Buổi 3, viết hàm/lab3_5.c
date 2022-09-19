#include <stdio.h>

void timdaucuoi(int n);

void main()
{
    int n;
    printf("nhap n: ");
    scanf("%d",&n);
    timdaucuoi(n);
}
void timdaucuoi(int n)
{
    int dau, cuoi;
    cuoi = n%10;
    while ( n>9)
    {
        n/=10;
    }
    dau = n;
    printf("so dau = %d", dau);
    printf("\nso cuoi = %d", cuoi);
}