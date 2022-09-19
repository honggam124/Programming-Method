#include <stdio.h>
#define max 1000

void input(int a[],int b[], int n);
void output(int a[], int n);
int dem(int a[], int b[], int n);

void main()
{
    int n;
    int a[max];
    int b[max];
    do
    {
        printf("nhap n>0: ");
        scanf("%d", &n);
    } while (n<=0);
    input(a,b,n);
    output(a,n);
    printf("\nSo phan tu bi trung la %d ", dem(a,b,n));
    
}
void input(int a[], int b[],int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("nhap phan tu thu %d: ", i+1);
        scanf("%d", &a[i]);
    }     
    for(i=0; i<n; i++)
    {
        b[i]=1;
    }
}
void output(int a[], int n)
{
    int i;
    printf("Mang: \n");
    for(i=0; i<n; i++)
    {
        printf("%d\t",a[i]);
    }
}
int dem(int a[],int b[], int n)
{
    int i;
    int dem=0;
    for(i=0; i<n; i++)
    {
        if( b[i])
        {
            b[i]=0;
            int j;
            for(j=i+1;j<n;j++)
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