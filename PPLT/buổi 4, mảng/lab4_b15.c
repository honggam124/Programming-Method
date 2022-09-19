#include <stdio.h>
#define max 1000

void input(int a[], int n);
void output(int a[], int n);

void main()
{
    int n;
    int a[max];
    do
    {
        printf("nhap n>0: ");
        scanf("%d",&n);
    } while (n<=0);
    input(a,n);
    int i;
    output(a,n);
    for(i=0; i< n-1; i++)
    {
        int j;
        for(j= i+1 ; j<n; j++)
        {
            if (a[j] < a[i])
            {
                int tam;
                tam=a[i];
                a[i]=a[j];
                a[j]=tam;
            }
        }
    }
    printf("\nSau khi sap xep:");
    output(a,n);

}
void input(int a[], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("nhap phan tu thu %d: ",i+1);
        scanf("%d",&a[i]);
    }
}
void output(int a[], int n)
{
    printf("\nMang: \n");
    int i;
    for(i=0; i<n; i++)
    {
        printf("%d\t", a[i]);
    }
}