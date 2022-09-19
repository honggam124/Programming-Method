#include <stdio.h>

void perfect(int n);

void main()
{
    int n;
    printf("Nhap n: ");
    scanf("%d",&n);
    perfect(n);
}
void perfect(int n)
{
    int i;
    int s=0;
    for(i=1; i<n; i++)
    {
        if(n%i==0)
        {
            s += i;
        }
    }
    if(s==n)
    {
        printf("Perfect");
    } else 
    {
        printf("Not perfect");
    }
}