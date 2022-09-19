#include <stdio.h>
#include <math.h>

void Armstrong(int n);

void main()
{
    int n;
     printf("nhap n>=0: ");
     scanf("%d",&n);
     Armstrong(n);

}
void Armstrong(int n)
{
     int dem;
     int n1=n;
     while(n>0)
     {
         n/=10;
         dem++;
     } printf("dem=%d\n",dem);
     int so=0;
     int n2=n1;
     while (n1>0)
     {
         so += (int) pow((n1%10),dem);
         n1/=10;
     }
     if ( so == n2)
     {
         printf("%d la so armstrong",n2);
     } else
     {
         printf("%d khong la so armstrong",n2);
     }
}