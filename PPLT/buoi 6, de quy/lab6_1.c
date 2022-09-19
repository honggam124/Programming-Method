#include <stdio.h>

int prime(int n, int i);

void main()
{
    int n;
    printf("Nhap n: ");
    scanf("%d",&n);
    if(prime(n,2))
    {
        printf("%d : Prime",n);
    } else
    {
        printf("%d: Not prime",n);
    }

}
int prime(int n, int i )
{
    int dem=0;
    int i1=i;
    if(n<2)
    {
        return 0;
    } 
    if(n==2)
    {
        return 1;
    } else if ( n%i1 == 0 )
        {
            if(i1 == n)
            {
                return 1;
            } else 
            {
                return 0;
            }             
        } else
        {            
            return prime(n,i1+1);
        }
}