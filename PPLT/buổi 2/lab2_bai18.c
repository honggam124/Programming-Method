#include <stdio.h>
#include <math.h>

int main ()
{
    long long int n, so_nhi_phan;
    //input
    printf("nhap so thap phan: ");
    scanf("%llu",&n);
    
    //
    int i=0;
    so_nhi_phan = 0;
    while( n>0)
    {
        so_nhi_phan += ( n%2 )* (int)pow(10,i);
         n/=2;
        i++;
    }
    printf("So nhi phan = %llu",so_nhi_phan);

    return 0;
}
