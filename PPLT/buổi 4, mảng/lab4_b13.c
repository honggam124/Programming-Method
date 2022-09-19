#include <stdio.h>
#define max 1000

void input(int a[], int n);
void output(int a[], int n);

void main()
{
    int a[max];
    int b[max];
    int c[max];
    int n,g,h;
    do
    {
        printf("nhap n>0: ");
        scanf("%d", &n);
    } while (n<=0);
    input(a,n);
    printf("Mang A: \n");
    output(a,n);
    
    g=0;
    h=0;
    int i;
    for(i=0; i<n; i++)
    {
        if ( a[i] %2 ==0)
        {
            b[g] = a[i];
            g++;
        } else
        {
            c[h] = a[i];
            h++;
        }
    }
    printf("\nMang chan: \n");
    output(b,g);
    printf("\nMang le: \n");
    output(c,h);
}
void input(int a[], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("nhap phan tu thu %d: ", i+1);
        scanf("%d",&a[i]);
    }
}
void output(int a[], int n)
{
    int i;
    for( i=0; i<n; i++)
    {
        printf("%d\t", a[i]);
    }
}