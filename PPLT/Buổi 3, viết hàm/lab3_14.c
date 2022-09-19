#include <stdio.h>

void perfect(int n);

void main()
{
    int n;
    printf("nhap n>0: ");
    scanf("%d",&n);
    perfect(n);
    
}
void perfect(int n)
{
    int i;
    int sum=0;
    for( i=1; i<n ; i++)
    {
        if (n%i==0)
        {
        sum += i;
        }
    }
    if (sum==n)
    {
        printf("%d la so hoan hao",n);
    } else 
    {
        printf("%d khong la so hoan hao",n);
    }
}