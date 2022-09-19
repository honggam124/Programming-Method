#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char chuoi[1024];
    int count;
    FILE *file;
    FILE *out;
    file = fopen("input02.txt","r");
    out = fopen("out2.txt","w");
    if(file == NULL)
    {
        printf("Error!");
        exit(1);
    }
    while( fgets(chuoi, 1024, file) )
    {
        count = strlen(chuoi);
        printf("Len: %d\n",count-1);
        fprintf(out,"Len: %d\n",count-1);
    }
    fclose(out);
    fclose(file);
    return 0;
}
