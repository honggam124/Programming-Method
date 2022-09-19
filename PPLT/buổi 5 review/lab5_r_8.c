#include <stdio.h>

int perfect(int x);
void print_per(int n);
void main()
{
    int n;
    do
    {
        printf("Nhap n: ");
        scanf("%d",&n);
    } while (n<1);
    print_per(n);
}
void print_per(int n)
{
    int i;
    if(n<6)
    {
        printf("Khong co so hoan hao");
    } else 
    {
        printf("Perfect:\n");
        for(i=1; i<=n; i++)
        {
            if (perfect(i))
            {
                printf("%d\t",i);   
            }
        }
    }
    
}
int perfect(int x)
{
    int i;
    int s=0;
    for(i=1; i<x; i++)
    {
        if(x%i==0)
        {
            s += i;
        }
    }
    if(s==x)
    {
        return 1;
    }
    return 0;
}