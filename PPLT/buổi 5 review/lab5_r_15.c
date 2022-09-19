#include <stdio.h>

void input(int a[], int n);
void output(int a[], int n);
int sum_even(int a[], int n);
void main()
{   
    int a[100];
    int n;
    do
    {
        printf("nhap n>0: ");
        scanf("%d", &n);
    } while (n<=0);
    input(a,n);
    output(a,n);
    printf("\nSum = %d",sum_even(a,n));
}
void input(int a[], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("\nNhap phan tu thu %d: ",i+1);
        scanf("%d",&a[i]);
    }
}
void output(int a[], int n)
{
    printf("\nMang:\n");
    int i;
    for(i=0; i<n; i++)
    {
        printf("%d\t",a[i]);
    }
}
int sum_even(int a[], int n)
{
    int s=0;
    int i;
    for(i=0; i<n; i++)
    {
        if(a[i]%2==0)
        {
            s += a[i];
        }
    }
    return s;
}