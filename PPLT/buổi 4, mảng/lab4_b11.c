#include <stdio.h>
#define max 1000
void input(int A[],int B[], int n);
void cau11_f(int A[], int B[], int n);
void output(int A[], int n);

void main()
{
    int n;
    int A[max];
    int B[max];
    do
    {
        printf("nhap n>0: ");
        scanf("%d", &n);
    } while (n<=0);
    input(A,B, n);
    output(A,n);
    cau11_f(A,B,n);

}
void input(int A[], int B[],int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("nhap phan tu thu %d: ", i+1);
        scanf("%d", &A[i]);
    }     
    for(i=0; i<n; i++)
    {
        B[i]=1;
    }
}
void output(int A[], int n)
{
    int i;
    printf("Mang: \n");
    for(i=0; i<n; i++)
    {
        printf("%d\t",A[i]);
    }
}
void cau11_f(int A[], int B[], int n)
{
    int i;
    for (i=0; i<n; i++)
    {
        if(B[i])
        {
            int dem=1;
            B[i]=0;
            int j;
            for(j=i+1; j<n; j++)
            {
                if( A[j]==A[i])
                {
                    dem++;                    
                    B[j]=0;
                }
            }
            printf("\nPhan tu mang gia tri %d xuat hien %d lan",A[i],dem);
        }       
    }      
}