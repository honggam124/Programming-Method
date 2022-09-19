#include <stdio.h>

void input(int a[], int n);
void output(int a[], int n);
void rev(int a[], int n);

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
    rev(a,n);

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
void rev(int a[], int n)
{
    int i;
    int temp;
    for(i=0; i<n/2; i++)
    {
        temp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;
    }
    printf("\nMang sau khi dao:\n");
    output(a,n);
}