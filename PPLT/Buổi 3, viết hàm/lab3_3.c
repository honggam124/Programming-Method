#include <stdio.h>

void table(int n);

void main()
{
    int n;
    printf("nhap n: ");
    scanf("%d",&n);
    table(n);

}
void table(int n)
{
    int i;
    for (i=1; i<=10; i++)
    {
        printf(" %d x %d = %d\n", n,i,n*i);
    }
}