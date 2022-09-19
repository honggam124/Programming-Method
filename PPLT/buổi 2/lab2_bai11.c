#include <stdio.h>

int main()
{
    int n,n1,tach,somoi;
    somoi=0;
    //input
    printf("Nhap n: ");  
    scanf("%d",&n);  
    n1=n;
    //
    while(n!=0)
    {
        tach=n%10;
        somoi=(somoi*10) + tach;
        n/=10;
    }
    if(n1==somoi)
    {
        printf("La so Palindrome");
    } else 
    {
        printf("Khong la so Palindrome");
    }
    return 0;
}