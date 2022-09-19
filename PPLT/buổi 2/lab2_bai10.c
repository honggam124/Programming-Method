#include <stdio.h>

int main()
{
    long long int n,socuoi,i;
     
    //input 
    printf("nhap n: ");
    scanf("%llu",&n);

    //dao nguoc
    if(n==0)
    {
        printf("0");
    } else
    {
        i=0;
        while (n!=0)
        {
            socuoi= n%10;
            if (socuoi!=0 || ((socuoi==0) && (i != 0)))
            {
            printf("%llu",socuoi);
            i++;
            }
            n/=10;
            
        }    
    }
    return 0;
}