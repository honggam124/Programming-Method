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
void cau6(NV a[], int n);
void cau7(NV a[], int n);
void cau8(NV a[], int n);
void cau9(NV a[], int n);

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
    output(nv,n);

    printf("\nCau 6, Danh sach theo thu tu nam sinh tang dan:");
    cau6(nv,n);
    output(nv,n);
    printf("\nCau 7, Danh sach theo thu tu luong tang:");
    cau7(nv,n);
    output(nv,n);
    printf("\nCau 8, Mot nhan vien co luong cao nhat:");
    cau8(nv, n);
    printf("\ncau 9, Mot nhan vien tre tuoi nhat:");
    cau9(nv,n);
}

void input(NV a[], int n)
{
    int i;
    char e;
    for( i=0; i<n ; i++)
    {
        printf("Nhap vao thong tin nhan vien %d: ", i+1);
        printf("\n\tNhap ID: ");
        scanf("%s", a[i].id);
        fflush(stdin);

        printf("\tNhap Ho ten NV: ");
        fgets( a[i].name, 100 ,stdin);
        fflush(stdin);

        printf("\tGioi tinh (F hoac M): ");
        scanf("%c", &a[i].sex);
        fflush(stdin);

        printf("\tNhap ngay sinh ( nhap dung theo cu phap: dd-mm-yyyy) : ");
        scanf("%s", a[i].by);

        printf("\tSo dien thoai: ");
        scanf("%s", a[i].phone);
        scanf("%c", &e);

        printf("\tNhap luong: ");
        scanf("%d", &a[i].salary);

        printf("\n-------------------------\n");
    }
}

void output(NV a[], int n)
{
    int i;
    for( i=0; i<n ; i++)
    {
        printf("\nThong tin nhan vien %d:",i+1);

        printf("\n\tID: %s", a[i].id);

        printf("\n\tHo ten NV: %s", a[i].name);

        printf("\tGioi tinh: %c", a[i].sex);

        printf("\n\tNgay sinh: %s", a[i].by);

        printf("\n\tSo dien thoai: %s", a[i].phone);      
            
        printf("\n\tLuong: %d\n",a[i].salary);

        printf("-------------------------\n");
    }
}

void cau6(NV a[], int n)
{
    int i,j,k,l,m;
    int dem ; //bien de kiem tra co giong nhau khong
    NV temp;

    for(i=0; i<n-1; i++)
    {       
        for( j=i+1 ; j<n; j++)
        {
            dem = 0;
            //vi nam bat dau tu vi tri so 6 trong chuoi:
            for(k=6; k<10; k++)
            {
                if( a[i].by[k] > a[j].by[k] )
                {    
                    dem = dem + 1;               
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;                             
                    break;
                }
                if( a[i].by[k] < a[j].by[k] )
                {
                    dem++;
                    break;
                }
            }
            //vi thang o vi tri so 3 va 4 trong chuoi: 
            if( dem == 0 )    
            {
                for(m=3; m<5; m++)      
                {
                    if( a[i].by[m] > a[j].by[m] )
                    {
                        dem = dem + 1; 
                        temp = a[i];
                        a[i] = a[j];
                        a[j] = temp;                                               
                        break;
                    }
                    if( a[i].by[m] < a[j].by[m] )
                    {
                        dem++;
                        break;
                    }
                }
            }   
            //vi ngay o vi tri so 0 va 1 trong mang:
            if( dem == 0 )     
            {
               for( l=0 ; l<2 ; l++ )
                {
                    if( a[i].by[l] > a[j].by[l] )
                    {
                        temp = a[i];
                        a[i] = a[j];
                        a[j] = temp;
                        break;
                    }
                }     
            }                                                                                                
        }      
    }   
}

void cau7(NV a[], int n)
{
    int i,j;
    NV temp;
    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if( a[j].salary < a[i].salary )
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void cau8(NV a[], int n)
{
    NV max[1];
    int i;
    max[0] = a[0];
    for( i=1; i<n; i++)
    {
        if( a[i].salary > max[0].salary )
        {
            max[0] = a[i];
        }
    }
    output( max,1);
}

void cau9(NV a[], int n)
{
    NV tre[1];
    tre[0] = a[0];

    int i,j,k,l,dem;
    for( i=1; i<n; i++)
    {
        dem=0;
        for( j=6; j<10; j++)
        {
            if( tre[0].by[j] < a[i].by[j] )
            {
                tre[0] = a[i];
                dem++;
                break;
            }
            if( tre[0].by[j] > a[i].by[j] )
            {
                dem++;
                break;
            }
        }
        if( dem==0 )
        {
            for( k=3; k<5; k++)
            {
                if( tre[0].by[k] < a[i].by[k] )
                {
                    tre[0] = a[i];
                    dem++;
                    break;
                }
                if( tre[0].by[k] > a[i].by[k] )
                {
                    dem++;
                    break;
                }
            }
        }
        if( dem==0 )
        {
            for( l=0; l<2; l++)
            {
                if( tre[0].by[l] < a[i].by[l] )
                {
                    tre[0] = a[i];
                    dem++;
                    break;
                }               
            }
        }
    }
    output(tre,1);
}

