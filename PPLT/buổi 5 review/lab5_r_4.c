#include <stdio.h>
#include <math.h>

void check_amrstrong(int n);

void main()
{
    int n;
    printf("Nhap n: ");
    scanf("%d",&n);
    check_amrstrong(n);
}
void check_amrstrong(int n)
{
    int dem=0;
    int n1=n;
    while(n>0)
    {
        n/=10;
        dem++;
    }
    int s=0;
    int i;
    int n2=n1;
    while(n1>0)
    {
        s += (int) pow(n1%10,dem);
        n1/=10;
    }
    if(s==n2)
    {
        printf("Amstrong");
    } else 
    {
        printf("Not amstrong");
    }
}
