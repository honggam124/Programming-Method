#include <stdio.h>

int mu(int n, int x);

void main()
{
    int n;
    int x;
    printf("nhap x: ");
    scanf("%d",&x);

    printf("Nhap so mu n: ");
    scanf("%d",&n);

    printf("Ket qua: %d",mu(n,x));

}
int mu(int n, int x)
{   
    if(n==0)
    {
        return 1;
    }
    return x*mu(n-1,x);
}