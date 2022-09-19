#include <stdio.h>
#include <math.h>

int Convert(int n);

void main()
{
    int n;
    printf("nhap so thap phan can doi: ");
    scanf("%d",&n);
    Convert(n);
    printf("Nhi phan = %d",Convert(n));
    
}
int Convert(int n)
{
    int Bin = 0;
    int dem = 0;
    while(n>0)
    {
       int a= pow(10,dem);
       Bin += (n%2)*a;
       n/=2;
       dem++;
    }
    return Bin;
}