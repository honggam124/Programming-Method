#include <stdio.h>

int reverse(int n);

void palindrome(int n);

void main()
{
    int n;
    palindrome(n);
    
}

void palindrome(int n)
{
    printf("nhap n: ");
    scanf("%d",&n);
    if ( n == reverse(n))
    {
        printf("%d la palindrome", n);
    } else { printf("%d khong la palindrome",n);}
}
int reverse(int n)
{
    int dao;
    dao = 0;
    while(n!=0)
    {
        dao = dao*10 + (n%10);
        n/=10;
    }
    return dao;
}