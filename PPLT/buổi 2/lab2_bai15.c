#include <stdio.h>

int snt(int x);

int main()
{   
    int n;
    do
    {
    printf("nhap n>=1: ");
    scanf("%d",&n);
    } while( n < 1 ) ;
    //for
    
    printf("\nDung for ");
    if (n==1)
    {
        printf("\n Khong co so nguyen to ");
    }
    int i;
    for(i=2; i<=n;i++)
    {
        if (snt(i))
        {
          printf("\n %d",i);
        }
    }
    //while
    printf("\nDung while");
    if (n==1)
    {
        printf("\n Khong co so nguyen to ");
    }
    int i2=2;
    while(i2 <=n)
    {
        if (snt(i2))
        {
            printf("\n %d",i2);
        }
        i2++;
    }
    //do-while
    printf("\nDung do-while ");
    if (n==1)
    {
        printf("\n Khong co so nguyen to ");
    }
    int i3=2;
    do
    {
        if (i3<=n)
        {
            if (snt(i3))
        {
            printf("\n %d",i3);
        }
        i3++;
        }
    } while ( i3 <=n );
    
    return 0;
}
int snt(int x)
{
if(x < 2)
 {
    return 0;
 } else 
    {
    int i ;
    for(i= 2; i < x; i++)
    {
        if(x % i == 0)
        {
            return 0;
        }
    }
    }
return 1;
}
