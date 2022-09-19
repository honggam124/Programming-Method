#include <stdio.h>

int sohoanhao(int x);

int main()
{
    int n;
    do
    {
        printf("nhap n>=1: ");
        scanf("%d",&n);
    } while (n<1);
    //for 
    printf("\nDung for: ");
    if (n==1)
    {
        printf("\n Khong co so hoan hao");
    }
    int i;
    for (i=2;i<=n;i++)
    {
        if (sohoanhao(i))
        {
            printf("\n%d",i);
        }
    }
    //while
    printf("\nDung while: ");
    if (n==1)
    {
        printf("\n Khong co so hoan hao");
    }
    int i2=2;
    while (i2<=n)
    {
        if (sohoanhao(i2))
        {
            printf("\n%d",i2);
        }
        i2++;
    }
    //do-while
    printf("\nDung do-while: ");
    if (n==1)
    {
        printf("\n Khong co so hoan hao");
    }
    int i3=2;
    while (i3<=n)
    {
        if (sohoanhao(i3))
        {
            printf("\n%d",i3);
        }
        i3++;
    }
    return 0;
}
int sohoanhao(int x)
{
    int tonguoc=0;
    int i;
    for( i=1; i < x ;i++ )
    {
        if( x%i==0 )
        {
            tonguoc += i;
        }
    }
    //
    if(tonguoc != x)
    {
       return 0;
    } else {
       return 1;
    }
}
