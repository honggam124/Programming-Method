#include <stdio.h>

int rev(int n);
void check_pal();

void main()
{
    int n;
    check_pal();
}
int rev(int n)
{
    int d = 0;
    while(n>0)
    {
        d = d*10 + (n%10);
        n/=10;
    }
    return d;
}
void check_pal()
{
    int n;
    printf("Nhap n: ");
    scanf("%d",&n);
    if (rev(n)== n)
    {
        printf("Palindrome");
    } else 
    {
        printf("Not palindrome");
    }
}