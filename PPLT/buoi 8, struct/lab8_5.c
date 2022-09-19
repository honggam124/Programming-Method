#include <stdio.h>
#include <string.h>

typedef struct  {
    char id[9];
    char name[100];
    char sex;
    char by[11];
    char phone[11];
    int salary;
} NV ;

void input(NV a[], int n);

void main()
{
    int n;
    NV nv[10];
    do
    {
        printf("Nhap so nhan vien (1->10): ");
        scanf("%d", &n);  
    } while (n<0, n>10);

    input(nv,n);

    int so_nu = 0;
    int so_nam = 0;

    int j;
    for(j=0; j<n; j++)
    {
        if ( nv[j].sex=='F')
        {
            so_nu ++;
        }
        if ( nv[j].sex=='M')
        {
            so_nam ++;
        }
    }
    printf("\nCo %d nam", so_nam);
    printf("\nCo %d nu", so_nu);
}
void input(NV a[], int n)
{
    int i;
    char e;
    for( i=0; i<n ; i++)
    {
        printf("Nhap vao thong tin nhan vien:");
        printf("\n\tNhap ID: ");
        scanf("%s", a[i].id);
        fflush(stdin);

        printf("\tNhap Ho ten NV: ");
        fgets( a[i].name, 100 ,stdin);
        fflush(stdin);

        printf("\tGioi tinh (F hoac M): ");
        scanf("%c", &a[i].sex);
        fflush(stdin);

        printf("\tNhap ngay sinh: ");
        scanf("%s", a[i].by);

        printf("\tSo dien thoai: ");
        scanf("%s", a[i].phone);
        scanf("%c", &e);

        printf("\tNhap luong: ");
        scanf("%d", &a[i].salary);
    }
}