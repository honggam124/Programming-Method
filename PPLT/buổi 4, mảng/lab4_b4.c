#include <stdio.h>
#define m 1000
void input(int A[], int n);
void output(int A[], int n);
int cau4_sum(int A[], int n);

void main()
{
    int n;
    int A[m];
    do
    {
        printf("nhap n>0: ");
        scanf("%d", &n);
    } while (n<=0);
    input(A,n);
    output(A,n);
    printf("\ncau 4) sum = %d", cau4_sum(A,n));
}
void input(int A[], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
      printf("nhap phan tu thu %d: ",i+1);
      scanf("%d",&A[i]);
    }
}
void output(int A[], int n)
{
    int i;
    printf("Mang:\n");
    for(i=0; i<n; i++)
    {
        printf("%d\t", A[i]);
    }
}
int cau4_sum(int A[], int n)
{
    int i;
    int sum=0;
    for(i=0; i<n; i++)
    {
        sum += A[i];
    }
    return sum;
}