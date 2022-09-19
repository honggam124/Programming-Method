#include <stdio.h>

void print_P(int n);
int check_P(int x);
void main()
{
    int n;
    do
    {
        printf("Nhap n: ");
        scanf("%d",&n);
    } while (n<1);
    print_P(n);
}
void print_P(int n)
{
    if (n==1)
    {
        printf("Khong co so nguyen to");
    } else 
    {
        int i;
        printf("Prime: \n");
        for(i=1; i<=n; i++)
        {
            if (check_P(i))
            {
                printf("%d\t",i);
            } 
        }
    }
}
int check_P(int x)
{
    if (x<2)
    {
        return 0;
    }
    int i;
    for(i=2; i<x; i++)
    {
        if(x%i==0)
        {
            return 0;
        }
    }
    return 1;
}