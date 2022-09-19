#include <stdio.h>
#include <math.h>

int doi(int n);

void main()
{     
    int  n;
    printf("nhap n: ");
    scanf("%d", &n);
    printf("so sau khi hoan doi la: %d", doi(n));
    
}
int doi(int n)
{
    int cuoi;
    cuoi = n%10;
    int dau;
    int n1=n;
    while (n>9)
    {
      n/=10;
    }
    dau =n;
    int dem;
    int n2=n1;
    if (n2==0)
    {
       dem = 1;
    } else {
    dem=0;
    while(n1!=0)
     {
        n1/=10;
        dem++;
     }
    }
    int a = pow(10,dem-1);
    int hoandoi = (cuoi*a + n2%a - cuoi + dau) ;
    return hoandoi;
}