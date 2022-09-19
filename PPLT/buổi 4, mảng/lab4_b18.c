#include <stdio.h>
#define max 100

void input(int a[][max], int d, int c);
void output(int a[][max], int d, int c);

void main()
{
    int c1,d1;
    int c2, d2;
    int a[max][max];
    int b[max][max];
    int tich[max][max];
    tich[max][max]=0;
    do
    {
        printf("nhap so dong cua ma tran 1: ");
        scanf("%d",&d1);
        printf("nhap so cot cua ma tran 1: ");
        scanf("%d",&c1);
        d2=c1;//chi nhan duoc 2 ma tran khi dong cua ma tran nay bang cot cua ma tran kia
        printf("nhap so cot cua ma tran 2: ");
        scanf("%d",&c2);
    } while (d1<=0||c1<=0||c2<=0);
    printf("Ma tran 1: ");
    input(a,d1,c1);
    printf("Ma tran 2: ");
    input(b,d2,c2);
    //a[d1,c1]xb[d2,c2]=tich[d1,c2]
    int i;
    for(i=0; i<d1; i++)
    {
        int j;
        for(j=0; j<c1; j++)
        {
            int k;
            for(k=0; k<c2; k++)
            {
            tich[i][k] += a[i][j]*b[j][k];
            }
        }
    }
    
    printf("Ma tran 1: \n");
    output(a,d1,c1);
    printf("Ma tran 2: \n");
    output(b,d2,c2);
    printf("Ket qua sau khi nhan 2 ma tran: \n");
    output(tich,d1,c2);
}
void input(int a[][max], int d, int c)
{
    int i;
    for(i=0; i<d; i++)
    {
        int j;
        for(j=0; j<c; j++)
        {
            printf("\nnhap phan tu dong %d cot %d: ", i+1, j+1);
            scanf("%d",&a[i][j]);
        }
    }
}
void output(int a[][max], int d, int c)
{
    int i;
    for(i=0; i<d; i++)
    {
        int j;
        for(j=0; j<c; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}
