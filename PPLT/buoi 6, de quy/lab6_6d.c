#include <stdio.h>
#include <math.h>

int factorial(int n);
float d(int n);

void main()
{
    int n;
    printf("Nhap n: ");
    scanf("%d",&n);
    printf("Cau d: %f", d(n));
}
float d(int n)
{
    if(n==1)
    {
        return 1 ;
    }
    return (float) sqrt(n) + d(n-1);
}