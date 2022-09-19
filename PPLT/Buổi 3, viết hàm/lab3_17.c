#include <stdio.h>

void perfect(int n);

void main()
{
    int n;
    do
    {
        printf("nhap n>=1: ");
        scanf("%d",&n);
    } while (n<1);
    perfect(n);
    
}
void perfect(int n)
{
    if(n<6)
    { 
       printf("khong co so hoan hao");
    } else
    {
    int i;
    for (i=1;i<=n;i++)
      {
        int m;
        int sum=0;
        for(m=1;m<i;m++)
        {
            if(i%m==0)
            {
                sum += m;
            }
        }
        if(sum==i)
        {
            printf("%d la so hoan hao\n",i);
        }          
      }
    }
}