#include <stdio.h>

void input(int a[], int b[], int n);
void output(int a[], int n);
void dem(int a[], int b[], int n);

void main()
{
    int a[100];
    int b[100];
    int n;
    do
    {
        printf("nhap n>0: ");
        scanf("%d", &n);
    } while (n<=0);
    input(a,b,n);
    output(a,n);
    dem(a,b,n);

}
void input(int a[], int b[], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("\nNhap phan tu thu %d: ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        b[i]=1;
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
void dem(int a[], int b[], int n)
{
    
    int i;
    for(i=0; i<n; i++)
    {
        if(b[i])
        {
            b[i]=0;
            int j;
            int c=1;
            for(j=i+1; j<n; j++)
            {
                if(a[j]==a[i])
                {
                    c++;
                    b[j]=0;
                }
            }
            printf("\nPhan tu mang gia tri %d xuat hien %d lan",a[i],c);
        }             
    }  
}
