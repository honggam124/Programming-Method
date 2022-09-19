#include <stdio.h>

int main() 
{
     //khai bao bien
    int n,s1,s2,s3;
    s1=0;
    s2=0;
    s3=0;

    //input 
    do
    {
    printf("nhap n>=1: ");
    scanf("%d", &n);
    }
    while ( n<1 ) ;

    //vong lap while:
    int dem = 1;
    while (dem<=n)
    {
    s1 += dem; //s1=s1+dem
    dem++;
    }
    printf("s1= %d\n", s1);

    //vong lap for:
    int i;
    for (i=1; i<=n; i++)
    {
        s2+= i;
    }
    printf("s2= %d\n",s2);

    //vong lap do-while
    int m=1;
    do
    {
    if (m<=n)
        {
        s3+=m; //s3=s3+m
        }
    m++;   
    } while (m<=n);
    printf("s3= %d", s3);

    return 0;
}