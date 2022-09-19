#include <stdio.h>

void reverse(int n);

void main()
{
    int n;
    printf("nhap n: ");
    scanf("%d",&n);
    reverse(n);
    
}

void reverse(int n)
{
    int dao;
    dao = 0;
    while(n!=0)
    {
        dao = dao*10 + (n%10);
        n/=10;
    }
    printf("so dao = %d", dao);
}