#include <stdio.h>

int main() {
    //khai bao bien
    float number;

    //input
    printf (" nhap so can tinh: ");
    scanf("%f",&number);

    //tinh toan
    if (number > -number) {
        printf("gia tri tuyet doi cua so can tinh la: %f", number);//output
    } else if ( -number > number ) {
        printf("gia tri tuyet doi cua so can tinh la: %f", -number);//output
    } else {
        printf("gia tri tuyet doi cua so can tinh la: 0");//output
    }

    return 0;
}