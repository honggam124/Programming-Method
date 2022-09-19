#include <stdio.h>
#include <string.h>
#define max 1000

typedef struct 
{
    char id[9];
    char name[100];
    int pplt;
    int dstt;
    int toan;
    float tbc;
    char xeploai[20];
} SinhVien;

void input(SinhVien a[], int n);
int find(SinhVien a[], int n, char *b);

void main()
{
    char b[9];
    char *b1;
    int n;
    SinhVien mang[max];
    do
    {
        printf("Nhap so luong sinh vien: ");
        scanf("%d",&n);
    } while (n<1);
    input(mang,n);
    printf("Nhap id sinh vien can tim: ");
    scanf("%s",b);
    b1 = strdup(b);
    b1 = strtok(b1,"\r\n");

    if(find(mang,n,b1)==-1)
    {
        printf("Khong tim thay");
    } else{
        printf("Sinh vien co id %s vi tri thu %d trong mang", b,find(mang,n,b1));
    }
    
}

void input(SinhVien a[], int n)
{
    int i;
    for( i=0; i<n ; i++)
    {
        printf("Nhap vao thong tin sinh vien:");
        printf("\n\tNhap ID: ");
        scanf("%s", a[i].id);
        fflush(stdin);

        printf("\tNhap Ho ten SV: ");
        fgets( a[i].name, 100 ,stdin);
        fflush(stdin);

        printf("\tDiem pplt: ");
        scanf("%d", &a[i].pplt);

        printf("\tDiem dstt: ");
        scanf("%d", &a[i].dstt);

        printf("\tDiem toan: ");
        scanf("%d", &a[i].toan);
    }
}

int find(SinhVien a[], int n, char *b)
{
    int i;
    for(i=0; i<n; i++)
    {
        if( strcmp( a[i].id, b) == 0)
        {
            return i;
        }
    }
    return -1;
}