#include <stdio.h>
#include <math.h>

int cv(int n);
void main()
{
    int n;
    printf("Nhap so thap phan: ");
    scanf("%d",&n);
    printf("Bin: %d",cv(n));
}
int cv(int n)
{
    int s=0;
    int dem=0;
    while(n>0)
    {
        s += (n%2)*(int)pow(10,dem);
        n/=2;
        dem++;
    }
    return s;
}