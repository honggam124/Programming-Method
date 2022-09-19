#include <stdio.h>

int main() 
{
    int n, sotach, sum;
    sum=0;

    //input
    printf("nhap n: ");
    scanf("%d", &n);

    //
    while (n!=0)
    {
        sotach = n%10;
        sum += sotach; 
        n/=10;
    }
    printf("sum= %d",sum);
     
    return 0;
}