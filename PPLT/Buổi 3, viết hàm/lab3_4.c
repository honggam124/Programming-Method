#include <stdio.h>

int tinhtong(int n);

void main()
{
    int n;
    printf("sum = %d",tinhtong(n));
}
int tinhtong(int n)
{
    do
    {
        printf("nhap n>=1: ");
        scanf("%d",&n);
    } while(n < 1);
    int i;
    int sum = 0;
    for (i=1;i<=n;i++)
    {
         sum += i;
    }
    return sum;
}