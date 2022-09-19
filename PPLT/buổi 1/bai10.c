#include <stdio.h>

int main() {
    
    //khai bao bien
    int a; //vi chan le chi co o so nguyen

    //input 
    printf("nhap so can kiem tra : ");
    scanf("%d",&a);

    //kiem tra
    if ( a % 2 == 0 ) {
        printf(" %d la so chan",a);
    } else {
        printf(" %d la so le",a);
    }
    return 0;
}