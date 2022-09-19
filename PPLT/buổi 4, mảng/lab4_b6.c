#include <stdio.h>
#define m 1000
void input(int A[], int n);
void output(int A[], int n);
int cau6_tongchan(int A[], int n);

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
    printf("\ncau 6) Tong so chan = %d",cau6_tongchan(A,n));
}
int cau6_tongchan(int A[], int n)
{
    int sum=0;
    int i;
    for(i=0; i<n; i++)
    {
        if (A[i]%2==0)
        {
            sum += A[i];
        }
    }
    return sum;
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