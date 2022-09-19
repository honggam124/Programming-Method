#include <stdio.h>
#define m 1000
void input(int A[], int n);
void output(int A[], int n);
int cau2_max(int A[], int n);

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
    printf("\ncau 2) max = %d", cau2_max(A,n));   
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
int cau2_max(int A[], int n)
{
    int max = A[0];
    int i;
    for(i=1; i<n; i++)
    {
       if (max<A[i])
       {
           max=A[i];
       }  
    }
    return max;
}



