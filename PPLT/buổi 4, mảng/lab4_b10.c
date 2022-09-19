#include <stdio.h>
#define max 1000

void input(int A[], int n);
void output(int A[], int n);
void delete(int A[], int *n);

void main()
{
    int n;
    int A[max];
    do
    {
        printf("nhap n>0: ");
        scanf("%d",&n);
    } while (n<=0);
    input(A,n);
    delete(A,&n);
    output(A,n);
}
void input(int A[], int n)
{
    int i;
    for(i=0; i<n;i++)
    {
        printf("Nhap phan tu thu %d: ",i+1);
        scanf("%d", &A[i]);
    }
}
void output(int A[], int n)
{
    printf("Mang: \n");
    int i;
    for(i=0; i<n; i++)
    {
        printf("%d\t", A[i]);
    }
}
void delete(int A[], int *n)
{
    int i;
    for(i=0; i<*n; i++)
    {
        int j;
        for(j=i+1; j<*n; j++)
        {
            if (A[j]==A[i])
            {
                int k;
                for(k=i; k<*n-1; k++)
                A[k]=A[k+1];
                *n=*n-1;
                i--;
            }
            
        }
    }
}