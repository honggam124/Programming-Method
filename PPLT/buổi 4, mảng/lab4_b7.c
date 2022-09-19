#include <stdio.h>
#define max 1000
void input(int A[], int n);
void output(int A[], int n);
void swapA(int A[], int n);

void main()
{
    int n;
    int A[max];
    do
    {
        printf("nhap n>0: ");
        scanf("%d", &n);
    } while (n<=0);
    input(A,n);
    output(A,n);
    swapA(A,n);
    output(A,n);
}

void input(int A[], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("nhap phan tu thu %d: ",i+1);
        scanf("%d", &A[i]);
    }
}
void output(int A[], int n)
{
    printf("\nMang: \n");
    int i;
    for(i=0; i<n; i++)
    {
        printf("%d\t",A[i]);
    }
}
void swapA(int A[], int n)
{
    int i;
    int tam;
    for (i=0; i<n/2; i++)
    {
        tam=A[i];
        A[i]=A[n-1-i];
        A[n-1-i]=tam;     
    }
}