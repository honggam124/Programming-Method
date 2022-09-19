#include <stdio.h>

int main()
{
    int n;
    long long int giaithua;

    //input
    do
    {
    printf("nhap n>=0: ");
    scanf("%d",&n);
    } while(n<0);

    //
    int i;
    giaithua=1;
    for (i=1; i<=n; i++)
    { 
        giaithua *=i;
    }
    printf("Giai thua cua %d = %llu", n, giaithua);

    return 0;
}