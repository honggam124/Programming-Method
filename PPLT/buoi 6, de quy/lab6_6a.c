#include <stdio.h>


int a(int n);

void main()
{
    int n;
    printf("Nhap n: ");
    scanf("%d",&n);

    printf("Cau a: %d", a(n));
}
int a(int n)
{
    if( n==1 )
    {
        return 2*n+1;
    }
    return (2*n+1) + a(n-1);
}