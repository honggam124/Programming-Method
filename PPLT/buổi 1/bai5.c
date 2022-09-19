#include <stdio.h>
int main() {

    //khai bao bien
    float doC, doF;

    //input
    printf("nhap do C: ");
    scanf("%f", &doC);

    //tinh toan
    doF = doC*1.8 +32.0;
    printf(" %.1f do C bang %.1f do F", doC, doF);//output
    return 0;
}