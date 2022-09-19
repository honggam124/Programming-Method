#include <stdio.h>
#define max 100

void input(int a[][max], int d, int c);
void output(int a[][max], int d, int c);

void main()
{
    int  d, c;
    int a[max][max];
    int b[max][max];
    int e[max][max];
    do
    {
        printf("nhap so dong cua 2 mang: ");
        scanf("%d",&d);
        printf("nhap so cot cua 2 mang: ");
        scanf("%d",&c);
    } while (d<=0 || c<=0);
    printf("Nhap ma tran A: ");
    input(a,d,c);
    printf("Nhap ma tran B: ");
    input(b,d,c);
    int i;
    for(i=0; i<d; i++)
    {
        int j;
        for(j=0; j<c; j++)
        {
            e[i][j] = a[i][j] - b[i][j];
        }
    }
    printf("Mang A: \n");
    output(a,d,c);
    printf("Mang B: \n");
    output(b,d,c);
    printf("Ket qua sau khi tru 2 ma tran:\n");
    output(e,d,c);
}
void input(int a[][max], int d, int c)
{
    int i;
    for(i=0; i<d; i++)
    {
        int j;
        for(j=0; j<c; j++)
        {
            printf("\nnhap phan tu dong %d cot %d: ",i+1, j+1);
            scanf("%d", &a[i][j]);
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
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}