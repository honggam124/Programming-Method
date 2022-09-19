#include <stdio.h>

int main() {
    
    //khai bao bien
    //diem cua cac mon theo thang diem 10
    float toan, ly, hoa, sinh, tin;
    float percentage;

    //input
    printf("nhap vao diem toan: ",toan);
    scanf("%f",&toan);
    printf("nhap vao diem ly: ",ly);
    scanf("%f",&ly);
    printf("nhap vao diem hoa: ",hoa);
    scanf("%f",&hoa);
    printf("nhap vao diem sinh: ",sinh);
    scanf("%f",&sinh);
    printf("nhap vao diem tin: ",tin);
    scanf("%f",&tin);

    //tinh toan 
    percentage = ((toan + ly + hoa + sinh + tin)/50) *100;
    if (percentage>90) {
        printf("%.2f%% so diem => vao lop A",percentage);//output
    } else if (percentage>80) {
        printf("%.2f%% so diem => vao lop B",percentage);//output
    } else if (percentage>70) {
        printf("%.2f%% so diem => vao lop C",percentage);//output
    } else if (percentage>60) {
        printf("%.2f%% so diem => vao lop D",percentage);//output
    } else if (percentage>40) {
        printf("%.2f%% so diem => vao lop E",percentage);//output
    } else {
        printf("%.2f%% so diem => vao lop F",percentage);//output
    }
    return 0;
}