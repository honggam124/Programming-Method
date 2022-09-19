#include <stdio.h>
#define max 1000

void input(int a[], int n);
void output(int a[], int n);

void main()
{
    int n;
    int key;
    int a[max];
    do
    {
        printf("Nhap n>0: ");
        scanf("%d", &n);
    } while (n<=0);   
    printf("nhap key: ");
    scanf("%d",&key);
    input(a,n);
    output(a,n);
    int i;
    int dem=0;
    for(i=0;i<n;i++)
    {
        if (a[i]==key)
        {
            printf("\nkey la phan tu thu %d",i+1);
            dem ++;
        }
    }  
    if (dem==0)
    {
        printf("\nkey khong co trong mang");
    }
}
void input(int a[], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("nhap phan tu thu %d: ",i+1);
        scanf("%d", &a[i]);
    }
}
void output(int a[], int n)
{
    printf("Mang: \n");
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t", a[i]);
    }
}