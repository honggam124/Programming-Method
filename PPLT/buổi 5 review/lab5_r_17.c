#include <stdio.h>

void input(int a[], int n);
void output(int a[], int n);
void delete(int a[], int *n, int vt);

void main()
{
    int a[100];
    int n;
    int vt;
    do
    {
        printf("nhap n>0: ");
        scanf("%d", &n);
    } while (n<=0);
    do
    {
        printf("Nhap vi tri can xoa: ");
        scanf("%d", &vt);
    } while (vt>n-1 || vt<0);
    input(a,n);
    output(a,n);
    delete(a,&n,vt);
    printf("\nMang sau khi xoa: ");
    output(a,n);
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
void delete(int a[], int *n, int vt)
{
    int i;
    for(i=vt-1; i<*n; i++)
    {
        a[i] = a[i+1];       
    }
    *n=*n-1;
}