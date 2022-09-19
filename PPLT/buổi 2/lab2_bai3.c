#include <stdio.h>

int main() 
{
    int a;

    //input
    printf("nhap so: ");
    scanf("%d",&a);

    //in bang
    int i;
    for ( i=1; i<=10; i++)
    {
        printf("%d x %d = %d\n", a, i, a*i);
    } 
    return 0;
}