#include <stdio.h>

int main() {
    
    //khai bao bien
    //nhap vao cac goc cua tam giac
    float a,b,c;
    
    //input
    printf("nhap vao goc thu nhat: ");
    scanf("%f",&a);
    printf("nhap vao goc thu hai: ");
    scanf("%f",&b);
    printf("nhap vao goc thu ba: ");
    scanf("%f",&c);

    //kiem tra
    if (a+b+c==180) {
       printf("tam giac hop le");//output
    } else {
        printf("tam giac khong hop le");//output
    }
    return 0;
}