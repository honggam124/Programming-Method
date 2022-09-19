#include <stdio.h>

int main() 
{
    int n,m, socuoi;

    //input
    printf("nhap n: ");
    scanf("%d",&n);
    m=n;
    //
    while( n>9)
    {
       socuoi = m % 10;
       n = n/10;
    }
    printf("so dau: %d\n", n);
    printf("so cuoi: %d", socuoi);
    
    return 0;
}