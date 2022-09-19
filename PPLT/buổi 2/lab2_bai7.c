#include <stdio.h>

int main() 
{
    int n, sotach, p;
    p=1;

    //input
    printf("nhap n: ");
    scanf("%d", &n);

    //
    if ( n==0)
    {
       printf(" product = 0");
    } else {
    while (n!=0)
    {
        sotach = n%10;
        p *= sotach; 
        n/=10;
    }
    printf("product= %d",p);
    }
    return 0;
}