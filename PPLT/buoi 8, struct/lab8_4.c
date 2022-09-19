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
void output(NV a[], int n);

void main()
{
    char e;
    int n;
    int j;
    int m=0;
    NV nv[10];
    NV temp[1];
    
    do
    {
        printf("Nhap so nhan vien (1->10): ");
        scanf("%d", &n);  
    } while (n<0, n>10);

    printf("Nhap id nhan vien: ");
    scanf("%s", &temp[0].id);
    scanf("%c", &e);

    input(nv,n);
    
    for(j=0; j<n; j++)
    {
        if( strcmp( nv[j].id, temp[0].id) == 0)
        {
            temp[0] = nv[j];  
            m++;  
            printf("\nNhan vien mang id %s can tim la", temp[0].id);
            printf(" nhan vien thu %d trong danh sach", j+1);
            break;      
        }
    }
    if(m==0)
    {
        printf("\nKhong tim thay ID nay");
    }
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

        printf("\tGioi tinh: ");
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
void output(NV a[], int n)
{
    int i;
    for( i=0; i<n ; i++)
    {
        printf("\nThong tin nhan vien:");

        printf("\n\tID: %s", a[i].id);

        printf("\n\tHo ten NV: %s", a[i].name);

        printf("\tGioi tinh: %c", a[i].sex);

        printf("\n\tNgay sinh: %s", a[i].by);

        printf("\n\tSo dien thoai: %s", a[i].phone);      
            
        printf("\n\tLuong: %d\n",a[i].salary);

        printf("\n-------------------------");
    }
}