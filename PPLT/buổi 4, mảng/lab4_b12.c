#include <stdio.h>
#define max 1000

void input(int a[], int n);

void output(int c[], int g);

void main()
{
    int n,m,g;
    int a[max];
    int b[max];
    int c[max];
    do
    {
        printf("nhap n>0: ");
        scanf("%d",&n);
        printf("nhap m>0: ");
        scanf("%d", &m);
    } while (n<=0 || m<=0);
    printf("Mang A:\n");
    input(a,n);
    printf("Mang B: \n");
    input(b,m);
    g=m+n;
    int i;
    for(i=0;i<n;i++)
    {
        c[i]=a[i];
    }
    int j;
    for(j=0;j<m;j++)
    {
        c[j+i]=b[j];
    }
    output(c,g);      
}
void input(int a[], int n)
{
    
    int i;
    for(i=0;i<n;i++)
    {
        printf("nhap phan tu thu %d: ",i+1);
        scanf("%d", &a[i]);
    }
}
void output(int c[], int g)
{
    printf("Mang C:\n");
    int i;
    for(i=0;i<g; i++)
    {
        printf("%d\t", c[i]);
    }
}
