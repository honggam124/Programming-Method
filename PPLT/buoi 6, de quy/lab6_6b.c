#include <stdio.h>

float b(int n);

void main()
{
    int n;
    printf("Nhap n: ");
    scanf("%d",&n);
    printf("Cau b: %f", b(n));
}
float b(int n)
{
    if(n==1)
    {
        return (float)n/2;
    }
    return (float)n/2 + b(n-1);
}