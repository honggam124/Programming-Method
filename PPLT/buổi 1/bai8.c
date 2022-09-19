#include <stdio.h>

int main() {
    // khai bao bien
    // a = num1, b = num2
    float a,b;

    //input
    printf(" nhap so thu nhat: ");
    scanf("%f",&a);
    printf(" nhap so thu hai: ");
    scanf("%f",&b);

    //tinh toan 
    if ( a<b) {
        printf(" %.2f lon hon %.2f: max=%.2f ", b,a,b);
    } else if ( a>b) {
        printf(" %.2f lon hon %.2f: max=%.2f ", a,b,a);
    } else {
        printf("hai so bang nhau: max=%2.f",a);
    }
    return 0;
}