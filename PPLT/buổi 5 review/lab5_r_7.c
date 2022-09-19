#include <stdio.h>
#include <math.h>

void print_Ams(int n);
int Ams(int x);
void main()
{
    int n;
    do
    {
        printf("Nhap n: ");
        scanf("%d",&n);
    } while (n<1);
    print_Ams(n);
}
void print_Ams(int n)
{
    int i;
    printf("Amstrong:\n");
    for(i=1; i<=n; i++)
    {
        if(Ams(i))
        {
            printf("%d\t",i);
        }
    }
}
int Ams(int x)
{
    int dem=0;
    int x1=x;
    int i;
    while(x>0)
    {
        x/=10;
        dem++;
    }
    int x2=x1;
    int sum=0;
    while(x1>0)
    {
        int a = pow(x1%10,dem);
        sum += a;
        x1/=10;
    }
    if(sum==x2)
    {
        return 1;
    }
    return 0;
}