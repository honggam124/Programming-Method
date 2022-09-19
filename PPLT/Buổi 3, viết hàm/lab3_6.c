#include <stdio.h>

int tinhtong(int n);

void main()
{
    int n;
    printf("nhap n: ");
    scanf("%d",&n);
    tinhtong(n);
    printf("sum = %d", tinhtong(n));
}
int tinhtong(int n)
{ 
    int sum=0;
    while(n!=0)
    {
        sum += (n%10);
        n /= 10;
    }
    return sum;
}