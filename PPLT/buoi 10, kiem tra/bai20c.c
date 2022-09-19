#include <stdio.h>

float c(int n);

void main()
{
    int n;
    printf("Nhap n: ");
    scanf("%d",&n);
    printf("Dap an: %f",c(n));
}

float c(int n)
{
    int i;
    float s=0;
    for(i=1; i<=n; i++)
    {
        s += (float)(2*i+1)/i;
    }
    return s;
}
