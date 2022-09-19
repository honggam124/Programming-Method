#include <stdio.h>

void input(int a[], int b[], int n);
void output(int a[], int n);
int count(int a[], int b[], int n);

void main()
{
    int a[100];
    int b[100];
    int n;
    do
    {
        printf("nhap n>0: ");
        scanf("%d", &n);
    } while (n<=0);
    input(a,b, n);
    output(a,n);
    printf("\nSo phan tu bi trung: %d", count(a,b,n));

}
void input(int a[], int b[], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("\nNhap phan tu thu %d: ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        b[i]=1;
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
int count(int a[], int b[], int n)
{
    int dem =0;
    int i;
    for(i=0; i<n; i++)
    {
        if(b[i])
        {
            b[i]=0;
            int j;
            for(j=i+1; j<n; j++)
            {
                if(a[j]==a[i])
                {
                    dem++;
                    b[j]=0;
                }
            }
        }
    }
    return dem;
}