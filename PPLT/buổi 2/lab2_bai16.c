#include <stdio.h>
#include <math.h>

int armstrong(long long int x);

int main()
{
    long long int n;
    do
    {
      printf("nhap n>=1: ");
      scanf("%llu", &n);
    } while (n < 1);
    //for 
    printf("\nDung for: ");
    long long int i;
    for ( i = 1; i <= n; i++)
    {
        if (armstrong(i))
        {
            printf("\n %llu",i);
        }
    }
    //while
    printf("\nDung while: ");
    long long int i2=1;
    while(i2<=n)
    {
        if (armstrong(i2))
        {
            printf("\n %llu",i2);
        } 
        i2++;
    }
    //do-while
    printf("\nDung do-while: ");
    long long int i3=1;
    do
    {
        if (i3<=n)
        {
            if (armstrong(i3))
            {
            printf("\n %llu",i3);
            }
        }
        i3++;
    } while (i3<=n);
    
    
    return 0;
}
int armstrong(long long int x)
{
   long long int sum=0;
   long long int i=0;
   long long int x1=x;
   int tach;
   while (x!=0)
   {      
       x/=10;
       i++;
   } 
    //tinh sum
   long long int x2=x1;
   while (x1!=0)
   {
       tach = x1%10;
       sum += pow(tach,i);
       x1/=10;
   } 
   if (sum==x2)
   {
       return 1;
   }   
 return 0;
}