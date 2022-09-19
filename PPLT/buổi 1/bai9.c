#include <stdio.h>
int main() {
    
    //khai bao bien
    // a=num1, b=num2, c=num3
    float a,b,c;

    //input
    printf("nhap so thu nhat: ");
    scanf("%f",&a);
    printf("nhap so thu hai: ");
    scanf("%f",&b);
    printf("nhap so thu ba: ");
    scanf("%f",&c);



    //tinh toan 
    if (a>b) {
        if (a>c) {
            printf(" %.2f la so lon nhat",a);//output
        }
        if (a<c) {
            printf(" %.2f la so lon nhat",c);//output
       }
    } else if (b>a) {
        if ( b>c) {
            printf("%.2f la so lon nhat",b); //output
        }
        if (b<c) {
            printf("%.2f la so lon nhat",c); //output
        }
    } else if (c>a) {
        if (c>b) {
            printf("%.2f la so lon nhat",c); //output
        } 
        if (c<b) {
            printf("%.2f la so lon nhat",b); //output
        }
    } else {
        printf("ba so bang nhau: max = %.2f", a);//output
    }   
    return 0;
}