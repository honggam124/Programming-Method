#include <stdio.h>

int main() 
{
    int n; 
    int tonguoc=0;
    //input
    printf("nhap n>0: ");//so hoan hao chi co o so nguyen duong
    scanf("%d",&n);
    //
    int i;
    for( i=1; i < n ;i++ )
    {
        if( n%i==0 )
        {
            tonguoc += i;
        }
    }
    //
    if(tonguoc==n)
    {
       printf("%d la so hoan hao",n);
    } else 
    {
        printf("%d khong la so hoan hao",n);
    }
    
    return 0;
}