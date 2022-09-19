#include <stdio.h>

int main() {
    //khai bao bien
    char c;

    //input 
    printf("nhap ki tu: ");
    scanf("%c",&c);

    //kiem tra
    if (( 'a'<=c && c<='z') || ( 'A'<=c && c<='Z')) {
        printf("ki tu nay la chu");//output
    } else if ( '0'<=c && c<='9') {
        printf("ki tu nay so");//output
    } else {
        printf("ki tu dac biet (khong phai chu, khong phai so)");
    }
    return 0;
}