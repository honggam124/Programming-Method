#include <stdio.h>

void input( int a[], int n);
void output( int a[], int n);
void select (int a[], int n);

void main()
{
    int a[1000];
    int n;    
    do
    {
        printf("Nhap n>0: ");
        scanf("%d", &n);
    } while (n<=0);
    input(a,n);    
    select(a,n);
    output(a,n);
}
void input( int a[], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("\nNhap phan tu thu %d: ", i+1);
        scanf("%d", &a[i]);
    }
}
void output( int a[], int n)
{
    int i;
    for(i=0 ; i<n ; i++)
    {
        printf("%d\t", a[i]);
    }
}
void select (int a[], int n)
{
    int i, j , min;
    int temp;
    for (i=0 ; i<n-1; i++)
    {
        min = i;
        for (j=i; j < n ;j++)
        {
            if (a[j]< a[min])
            {
                temp = a[j];
                a[j] = a[min];
                a[min] = temp;
            }
        }
    }
}