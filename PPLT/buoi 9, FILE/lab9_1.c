#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,x;
    int tong = 0;
    FILE *file;
    FILE *out;
    file = fopen("input01.txt","r");
    out = fopen("out1.txt","w");
    if (file==NULL)
    {
        printf("Error!");
        exit(1);
    }
    for(i=0; i<20; i++)
    {
        fscanf(file,"%d",&x);
        tong += x;
    }
    //in ra man hinh:
    printf("Tong 20 so nguyen: %d",tong);
    //ghi vao file moi:
    fprintf(out,"Tong 20 so nguyen: %d",tong);
    //dong file:
    fclose(file);
    fclose(out);
    return 0;
}
