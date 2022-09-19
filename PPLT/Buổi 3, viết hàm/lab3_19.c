#include <stdio.h>

int factorial( int n);

void main()
{
    int n;
    do
    {
        printf("nhap n>=0: ");
        scanf("%d",&n);
    } while (n<0);
    printf("giai thua cua %d = %d ",n,factorial(n));

}
int factorial(int n)
{
    int i;
    int tich=1;
    for (i=1; i<=n; i++)
    {
        tich *= i;
    }
    return tich;
}