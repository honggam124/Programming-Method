#include <stdio.h>

int main()
{
    char name[100];
    int age;
    char gender;
    char e;
    //doc noi dung tu tap tin -> thongtin.gam
    FILE *rfile;
    rfile = fopen("thongtin.gam","r");

    fgets(name,100,rfile);
    fscanf(rfile,"%d",&age);
    fscanf(rfile,"%c",&e);
    fscanf(rfile,"%c",&gender);

    fclose(rfile);

    //in noi dung da doc ra man hinh
    printf("Ten: %s",name);
    printf("Tuoi: %d",age);
    printf("\nGioi tinh: %c",gender);

    //ghi noi dung da doc ra tap tin ketqua.outp
    FILE *wfile;
    wfile = fopen("ketqua.out","w");

    fprintf(wfile,"Ten: %s",name);
    fprintf(wfile,"Tuoi: %d",age);
    fprintf(wfile,"\nGioi tinh: %c",gender);

    fclose(wfile);

    return 0;
}