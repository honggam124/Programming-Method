#include <stdio.h>

void tinhtong(int n);

void main()
{
    int n;
    do
    {
        printf("nhap n>=1: ");
        scanf("%d", &n);
    } while (n<1);
    tinhtong(n);
    
}
void tinhtong(int n)
{
    int sum = 0;
    int i;
    for(i=2; i<=n; i+=2)
    {
        sum += i;
    }
    printf(" sum = %d",sum);

}