#include <stdio.h>
#define max 100

void input(int a[][max], int d, int c);
void output(int a[][max], int d, int c);

void main()
{
    int d,c;
    int a[max][max];
    do
    {
        printf("nhap so dong cua ma tran: ");
        scanf("%d",&d);
        printf("nhap so cot cua ma tran: ");
        scanf("%d",&c);
    } while (d<=0|| c<=0);
    printf("Ma tran:");
    input(a,d,c);
    printf("Ma tran luc dau: \n");
    output(a,d,c);
    int tam;
    int i;
    for(i=1; i<c*d; i++)
    {
        int j;
        for(j=0; j<i; j++)
        {
            tam=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=tam;
        }
    }
    printf("Chuyen vi: \n");
    output(a,c,d);//dong va cot doi cho nhau
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
