#include <stdio.h>

int factorial(int n);
int e(int n);

void main()
{
    int n;
    printf("Nhap n: ");
    scanf("%d",&n);
    printf("Cau e: %d", e(n));
}
int factorial(int n)
{
    if(n==1)
    {
        return 1;
    }
    return n*factorial(n-1);
}
int e(int n)
{
    if(n==1)
    {
        return 1;
    }
    return factorial(n) * e(n-1);
}