#include <stdio.h>

void input(int a[], int n);
void output(int a[], int n);
void delete(int a[], int *n);

void main()
{
    int a[100];
    int n;
    do
    {
        printf("nhap n>0: ");
        scanf("%d", &n);
    } while (n<=0);
    input(a,n);
    delete(a,&n);
    printf("\nMang sau khi xoa: ");
    output(a,n);
    
}
void input(int a[], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("\nNhap phan tu thu %d: ",i+1);
        scanf("%d",&a[i]);
    }
}
void output(int a[], int n)
{
    printf("\nMang:\n");
    int i;
    for(i=0; i<n; i++)
    {
        printf("%d\t",a[i]);
    }
}
void delete(int a[], int *n)
{
    int i;
    for(i=0; i<*n; i++)
    {
        int j;
        for(j = i+1 ; j < *n ; j++)
        {
            if( a[j]==a[i] )
            {
                int k;
                for( k=j ; k< *n-1; k++)
                {
                    a[k]=a[k+1];                                 
                }       
                i--;        
                *n = *n-1;     
            }
        }
    }
}