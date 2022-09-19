#include <stdio.h>
#include <math.h>

int main()
{
    long long int n;
    int dem ;
  

    //input
    printf("nhap n: ");
    scanf("%llu", &n);

    //dem
    if (n == 0)
    {
        printf("dem= 1");
    } else 
    {
    dem = 0;
    while(n!=0)
      {
        dem ++;
        n/=10;
      }
    printf("dem= %d", dem);
    }
    
    
    return 0;
}