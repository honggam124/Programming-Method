#include <stdio.h>

int factorial(int n);
int c(int n);

void main()
{
    int n;
    printf("Nhap n: ");
    scanf("%d",&n);
    printf("Cau c: %d", c(n));
}
int c(int n)
{
    if(n==1)
    {
        return 1;
    }
    return factorial(n)+c(n-1);
}
int factorial(int n)
{
    if(n==1)
    {
        return 1;
    }
    return n*factorial(n-1);
}