#include <stdio.h>

int Prime(int n);
void check_P(int n);

void main()
{
    int n;
    do
    {
        printf("Nhap n: ");
        scanf("%d",&n);
    } while (n<0);
    check_P(n);
}
int Prime(int n)
{
    if (n<2)
    {
        return 0;
    }
    int i;
    for(i=2; i<n; i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
void check_P(int n)
{
    if(Prime(n))
    {
        printf("%d: Prime",n);
    } else 
    {
        printf("%d: not prime",n);
    }
}