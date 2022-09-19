#include <stdio.h>
#include <math.h>
int main() 
{
    long long int n;
    long long int sum =0;
    int tach;
    //input
    printf("nhap n>=0: ");
    scanf("%llu",&n);
    //dem chu so
    long long int i=0;
    long long int n1=n;
    while (n!=0)
    {      
       n/=10;
       i++;
    } 
    //tinh sum
    long long int n2=n1;
    while (n1!=0)
    {
       tach = n1%10;
       sum += pow(tach,i);
       n1/=10;
    } 
    //output
    if (n2==sum)
    {
        printf("%llu la so armstrong",n2);
    } else 
    {
        printf("%llu khong la so armstrong",n2);
    }
    return 0;
}