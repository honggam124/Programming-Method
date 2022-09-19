#include <stdio.h>

void input( int a[], int n);
void output( int a[], int n);
void bubble( int a[], int n);

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
    bubble(a,n);
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
void bubble( int a[], int n)
{
    int i, j , temp;
    for( i = n - 2; i >= 0; i --)
    {
        for ( j=0; j <= i; j++)
        {
            if( a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}