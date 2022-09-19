#include <stdio.h>

int mu(int n);

void main()
{
    int n;
    printf("Nhap so mu n: ");
    scanf("%d",&n);
    printf("Ket qua: %d",mu(n));
}
int mu(int n)
{
    
    if(n==0)
    {
        return 1;
    }          
    return 2*mu(n-1);   
}