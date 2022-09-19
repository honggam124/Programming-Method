#include <stdio.h>

long long int count(long long int n);

void main()
{   
    long long int n;
    printf("nhap n: ");
    scanf("%llu",&n);
    count(n);
    printf(" co %llu so", count(n));
    
}
long long int count(long long int n)
{
    long long int dem;
    if (n==0)
    {
        return 1;
    } else
    {
    dem= 0;
    while(n!=0)
       {
       dem++;
       n /= 10;
       }
    }
return dem ;
}