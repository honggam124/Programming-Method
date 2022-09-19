#include <stdio.h>

float caua(int n);
int caub(int n);
float cauc(int n);
int caud(int n);
int caue(int n);
int cauf(int n);
float caug(int n);
float cauh(int n);

void main()
{
    int n;
    printf("Nhap n: ");
    scanf("%d",&n);
    printf("Cau a: %.2f",caua(n));
    printf("\nCau b: %d",caub(n));
    printf("\nCau c: %.2f",cauc(n));
    printf("\nCau d: %d",caud(n));
    printf("\nCau e: %d",caue(n));
    printf("\nCau f: %d",cauf(n));
    printf("\nCau g: %.2f",caug(n));
    printf("\nCau h: %.2f",cauh(n));
}
float caua(int n)
{
    int i;
    float s=0;
    for(i=1;i<=n;i++)
    {
        s += (float) i/2.0;
    }
    return s;
}
int caub(int n)
{
    int i;
    int s=0;
    for(i=1; i<=n; i++)
    {
        s += (2*i+1);
    }
    return s;
}
float cauc(int n)
{
    int i;
    float s=0;
    for(i=1; i<=n; i++)
    {
        s += (float)(i+1)/(i+2);
    }
    return s;
}
int caud(int n)
{
    int i;
    int s=0;
    for(i=1; i<=n; i++)
    {
        int j;
        int giaithua =1;
        for(j=1; j<=i; j++)
        {
            giaithua *= j;
        }
        s += (giaithua+1);
    }
    return s;
}
int caue(int n)
{
    int i;
    int p=1;
    for(i=1; i<=n; i++)
    {
        p *= i;
    }
    return p;
}
int cauf(int n)
{
    int i;
    int p=1;
    for(i=1; i<=n; i++)
    {
        int j;
        int giaithua=1;
        for(j=1; j<=i; j++)
        {
            giaithua *=j;
        }
        p *= giaithua;
    }
    return p;
}
float caug(int n)
{
    int i;
    float p=1;
    for(i=1; i<=n; i++)
    {
        p *= (float)2*i/3;
    }
    return p;
}
float cauh(int n)
{
    int i;
    float p = 1;
    for (i=1; i<=n; i++)
    {
        p *= (float) (i-1) / (i+1);
    }
    return p;
}
