#include <stdio.h>
#include <math.h>
int main ()
{
    long long int n,n1,ntinh,kq,cout,dau,cuoi;
    //input
    printf("nhap n: ");
    scanf("%llu",&n);
    n1 = n;
    ntinh= n;
    //tinh cout
    if (n==0)
    {
        cout=1;
    } else 
    {
    cout = 0;
    while(n!=0)
      {
        cout++;
        n/=10;
      }
    }
    printf("cout = %llu\n",cout);
    //tim so cuoi
    cuoi = n1%10;
    printf("so cuoi = %llu\n",cuoi);
    //tim so dau
    while( n1>9 )
    {
       n1 /= 10;
    }
    dau = n1;
    printf("so dau = %llu\n",dau);
    //doi cho
    long long int a = pow( 10, (cout-1) );
    kq = cuoi*a + ntinh%a - cuoi + dau;
    printf("ket qua = %llu", kq);   
    return 0;
}