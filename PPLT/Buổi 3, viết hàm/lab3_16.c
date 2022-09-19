#include <stdio.h>
#include <math.h>

void amstrong(int n);

void main()
{
    int n;
    do
    {
        printf("nhap n>=1: ");
        scanf("%d",&n);
    } while (n<1);
    amstrong(n);
    
}
void amstrong(int n)
{
    int i;
    for (i=1; i<=n; i++)
    {
        int dem =0;
        int i2=i;
        while(i2>0)
        {
            i2/=10;
            dem++;
        }
        int i3=i;
        int sum=0;
        while(i3>0)
        {
            sum += pow(i3%10,dem);
            i3/=10;
        }
        if(sum == i)
        {
            printf("%d la so armstrong\n", i);
        }
    }
}
