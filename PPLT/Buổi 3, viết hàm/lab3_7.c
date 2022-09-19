#include <stdio.h>

int tinhtich(int n);

void main()
{
  int n;
  printf("nhap n: ");
  scanf("%d",&n);
  tinhtich(n);
  printf("product = %d", tinhtich(n));
  
}
int tinhtich(int n)
{ 
    if (n==0)
    {
        return 0;
    }
    int p;
    p=1;
    while(n!=0)
    {
      p *= (n%10);
      n/=10;
    }
    return p;
}