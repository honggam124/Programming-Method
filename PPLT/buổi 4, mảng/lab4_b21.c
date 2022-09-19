#include <stdio.h>
#define max 100

void input(int a[][max], int n);
void output(int a[][max], int n);
int det(int a[][max], int n);


void main()
{
    int a[max][max];
    int b[max][max];//ma tran nho tach ra tu a
    int n;//dinh thuc o ma tran vuong
    do
    {
        printf("nhap n: ");
        scanf("%d",&n);
    } while (n<=0);
    printf("Nhap ma tran: \n");
    input(a,n);
    printf("Ma tran:\n");
    output(a,n);
    printf("det=%d",det(a,n));
}
void input(int a[][max], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        int j;
        for(j=0; j<n; j++)
        {
            printf("\n nhap phan tu dong %d cot %d: ", i+1, j+1);
            scanf("%d",&a[i][j]);
        }
    }
}
void output(int a[][max], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        int j;
        for(j=0; j<n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}
int det(int a[][max], int n)
{
    int b[max][max];
    int s;
    int k;
    int sum=0;  
    int i;
    if( n==1 )
    {
        sum+=a[0][0];
    } else if(n==2)
    {
        sum+=a[0][0]*a[1][1]-a[0][1]*a[1][0];
    } else
    {
        for(i=0; i<n; i++)
        {      
            int j;
            for(j=0;j<n;j++)
            {
              
                for(k=0;k<n;k++)
                {
                    if(j<i)
                    { 
                        b[j][k-1] = a[j][k]; 
                    } else if(j>i)
                    {
                        b[j-1][k-1]= a[j][k];
                    }
                }               
            } 
            if(i%2==0)
            {
                s=1;
            } else
            {
                s=-1;
            }
            sum += a[i][0]*s*det(b,n-1);
        } 
    }
    return sum;
}