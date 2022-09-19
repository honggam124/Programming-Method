#include <stdio.h>

float cau_a(int n);
int cau_b(int n);
int cau_c(int n);
int cau_d(int n);
float cau_e(int n);



void main()
{
    int n;
    do
    {
        printf("Nhap n>=1: ");
        scanf("%d", &n);
    } while (n<1);
    printf("Ket qua cau a: %.2f",cau_a(n));
    printf("\nKet qua cau b: %d",cau_b(n));
    printf("\nKet qua cau c: %d",cau_c(n));
    printf("\nKet qua cau d: %d",cau_d(n));
    printf("\nKet qua cau e: %.2f",cau_e(n));
}



float cau_a(int n)
{
    float sum =0;
    int i;
    for (i=1; i<=n; i++)
    {
        sum += (float) i/2;
    }
    return sum;
}
int cau_b(int n)
{
    int sum=0;
    int i;
    for (i=1; i<=n ; i++)
    {
        sum += (2*i + 1);
    }
    return sum;
}
int cau_c(int n)
{
    int sum=0;
    int i;
    for(i=1; i<=n; i++)
    {
        int j;
        int tich =1;
        for(j=1; j<=i; j++)
        {
            tich *= j;
        }
        sum += (tich+1);
    }
    return sum;
}
int cau_d(int n)
{
    int p=1;
    int i;
    for(i=1; i<=n; i++)
    {
        int j;
        int tich=1;
        for(j=1; j<=i; j++)
        {
            tich *= j;
        }
        p *= tich;
    }
    return p;
}
float cau_e(int n)
{
    float p=1;
    int i;
    for(i=1; i<=n; i++)
    {
        p *= (float) (2*i)/3;
    }
    return p;
}
