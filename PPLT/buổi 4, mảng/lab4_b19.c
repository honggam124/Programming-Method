#include <stdio.h>
#define max 100

void input(int a[][max], int d, int c);
void output(int a[][max], int d, int c);
void main()
{
    int d1,c1,d2,c2;
    int a[max][max];
    int b[max][max];
    do
    {
        printf("nhap so dong cua ma tran 1: ");
        scanf("%d",&d1);
        printf("nhap so cot cua ma tran 1: ");
        scanf("%d",&c1);
        printf("nhap so dong cua ma tran 2: ");
        scanf("%d",&d2);
        printf("nhap so cot cua ma tran 2: ");
        scanf("%d",&c2);
    } while (d1<=0||c1<=0||d2<=0||c2<=0);
    if (d1==d2 && c1==c2)
    {
        printf("Mang 1:");
        input(a,d1,c1);
        output(a,d1,c1);
        printf("Mang 2:");
        input(b,d2,c2);
        output(b,d2,c2);
        int dem=0;
        int i;
        for(i=0; i<d1; i++)
        {
           int j;
           for(j=0; j < c1; j++)
           {
               if(a[i][j]==b[i][j]) 
               { 
                   dem++;
               }
           }
        }
        if(dem==(d1*c1))
        {
            printf("Hai ma tran bang nhau");
        } else { 
            printf("Hai ma tran khong bang nhau"); 
        }
    } else
    {
        printf("Hai ma tran khong bang nhau.");
    }   
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
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}