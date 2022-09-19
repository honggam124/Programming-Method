#include <stdio.h>

void Prime(int n);

void main()
{
   int n;
   do
   {
   printf("nhap n: ");
   scanf("%d", &n);
   } while(n<0);
   Prime(n);
   
}
void Prime(int n)
{
    if (n<2)
    {
        printf("khong phai so nguyen to.");
    } else 
    {
        int i;
        int dem=0;
        for (i=2;i<n;i++)
        {
           if (n%i==0)
           {
               dem++;
           }
        }
    //
    if (dem == 0)
        {
        printf("%d la so nguyen to", n);
        } else 
        {
        printf("%d khong la so nguyen to",n);
        }
    }       
}