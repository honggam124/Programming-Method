#include <stdio.h>

int main() {

    //khai bao bien
    int nam;

    //input
    printf("nhap nam can kiem tra: ");
    scanf("%d",&nam);

    //tinh toan 
    if (( (nam % 4 ==0) && (nam % 100 != 0)) || (nam % 400 ==0)) {
        printf("nam %d la nam nhuan",nam);//output
    } else {
        printf("nam %d khong la nam nhuan",nam);//output
    }
    return 0;
}