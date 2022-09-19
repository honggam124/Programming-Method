#include <stdio.h>

int main()
{   
    int n;

    //input
    do
    {
        printf("nhap n: ");
        scanf("%d",&n);
    } while (n<0);
    //
    if(n < 2)
    {
        printf("%d khong phai so nguyen to", n);
    } else 
    {
    int count = 0;
    int i ;
    for(i= 2; i < n; i++)
    {
        if(n % i == 0)
        {
            count++;
        }
    }
    //output
    if(count == 0)
    {
        printf("%d la so nguyen to", n);
    }else
    {
        printf("%d khong phai so nguyen to", n);
    }
    }
    return 0;
}