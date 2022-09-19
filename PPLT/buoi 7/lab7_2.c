#include <stdio.h>

void input( int a[], int n);
void output( int a[], int n);
int binary_search( int a[], int n, int x);

void main()
{
    int a[1000];
    int n;
    int x;
    do
    {
        printf("Nhap n>0: ");
        scanf("%d", &n);
    } while (n<=0);
    input(a,n);
    output(a,n);
    printf("\nNhap x: ");
    scanf("%d", &x);
    
    if (binary_search(a,n,x) == -1)
    {
        printf("Khong tim thay gia tri %d trong mang",x);
    } else
    {
        printf("Gia tri %d o vi tri %d trong mang",x,binary_search(a,n,x));
    }
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
int binary_search( int a[], int n, int x)
{
    int l= 0;
    int h= n-1;

    while ( l <= h )
    {
        int mid = (l + h)/2;
        if (a[mid] == x)
        {
            return mid;
        }

        if (a[mid] > x)
        {
            h = mid - 1;
        }

        if (a[mid] < x)
        {
            l = mid +1;
        }
    }
    return -1;
}