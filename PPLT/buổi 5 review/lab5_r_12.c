#include <stdio.h>

void input(int a[], int n);
void output(int a[], int n);
void min(int a[], int n);

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
    min(a,n);
}
void input(int a[], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("\nNhap phan tu thu %d: ", i+1);
        scanf("%d",&a[i]);
    }
}
void output(int a[], int n)
{
    int i;
    printf("\nMang:\n");
    for(i=0; i<n; i++)
    {
        printf("%d\t",a[i]);
    }
}
void min(int a[], int n)
{
    int m=a[0];
    int i;
    for(i=0; i<n; i++)
    {
        if(m > a[i])
        {
            m=a[i];
        }
    }
    printf("\nMin: %d",m);
}