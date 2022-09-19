#include <stdio.h>

void Prime(int n);

void main()
{
    int n;
    do
    {
        printf("nhap n>=1: ");
        scanf("%d",&n);
    } while (n<1);
    Prime(n);
    
    
}
void Prime(int n)
{
    int i;
    if (n==1)
    {
        printf("khong co so nguyen to");
    } else 
    { 
        
        for(i=2; i<=n; i++)
        {
            int dem=0;
            int m;
            for (m=2; m<i; m++)
            {
                if(i%m==0)
                {
                    dem++;
                }
            }
            if(dem==0)
            {
                printf("%d la so nguyen to\n",i);
            }
        }
    }
}