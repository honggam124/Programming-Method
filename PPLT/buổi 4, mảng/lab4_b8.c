#include <stdio.h>
#define max 100

void input(int A[], int *n);
void del(int A[], int *n, int vt);
void output(int A[], int *n);

void main()
{
    int n;
    int A[max];
    int vt;
    do
    {
        printf("nhap n>0: ");
        scanf("%d", &n);
    } while (n<=0);
    do
    {
        printf("Nhap vi tri can xoa: ");
        scanf("%d", &vt);
    } while (vt>n-1 || vt<0);
    input(A,&n);
    del(A,&n,vt);
    output(A,&n);
}
void input(int A[], int *n)
{
    int i;
    for(i=0; i<*n; i++)
    {
        printf("nhap phan tu %d: ", i+1);
        scanf("%d", &A[i]);
    }
}
void del(int A[], int *n, int vt)
{
    int i;
    for(i=vt; i< *n-1; i++)
    {            
         A[i] = A[i+1];  
    }
    *n=*n-1;
}
void output(int A[], int *n)
{
    printf("Mang: \n");
    int i;
    for(i=0; i<*n; i++)
    {
        printf("%d\t", A[i]);
    }
}

