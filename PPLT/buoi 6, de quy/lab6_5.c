#include <stdio.h>

int count(int n, int d);

void main()
{
    int n;
    printf("Nhap n: ");
    scanf("%d",&n);
    printf("Count: %d",count(n,1));
}
int count(int n, int d)
{
    if(n<10)
    {
        return 1;
    }  
    return d + count(n/10 , 1) ;
}