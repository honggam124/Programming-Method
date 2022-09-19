#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct 
{
    char *last;
    char *first;
    char *empl;
    char *gen;
    char *date;
    char *dep;
    char *ctr;
} NV;

void lw(char s[]);
void err();
void input(NV nv[],int n);
void output(NV nv[], int n);
//
void check_cach(char s[]);
void dem(char *x);
void nam_nu(char c[]);
void rep(double n);
void ave(char x[]);
void ctr(char name[]);
void sort_a();
void sort_d();


int main()
{
    int g,gam;
    char s[50];
    char *s1;
    char *s2;
    printf("");
    fgets(s, 50, stdin);
    check_cach(s);
    lw(s);
    s1 = strtok(s," ");
    s2 = strtok(NULL,"\n");

    if( strcmp(s1,"count")==0 ) 
    {
        dem(s2);
    } else if ( strcmp(s1,"list")==0) 
    {
        if (strcmp(s2,"female") == 0 )
        {
            nam_nu("Female");
        } else if (strcmp(s2,"male")==0)
        {
            nam_nu("Male");
        } else err();
    } else if ( strcmp(s1,"report")==0)
    {
        for(g=0; g<strlen(s2); g++)
        { 
            if((s2[g]<48 || s2[g]>57) && s2[g]!=46)
                err();
        }
        double n = atof(s2);
        if( n>=0 && n<=1)
        {
            rep(n);
        }
        else err();
    } else if ( strcmp(s1,"average")==0)
    {
        for(g=0; g<strlen(s2); g++)
        { 
            if(s2[g]==' ')
                err();
        }
        ave(s2);
    } else if ( strcmp(s1,"country")==0)
    {
        ctr(s2);
    } else if(strcmp(s1,"sort")==0)
    {
        if (strcmp(s2,"asc") == 0 )
            sort_a();
        else if (strcmp(s2,"desc")== 0)
            sort_d();
        else err();
    } else err();
    return 0;
}

void dem( char *x)
{
    FILE *emp;
    FILE *result;
    emp = fopen("Employee.csv","r");
    result = fopen("result.csv","w");
    int count = 0;
    char *lay;
    char chuoi[100];
    int cot ;
    while( fgets(chuoi, 100, emp) )
    {
        cot = 0;
        lay = strtok(chuoi,",");
        while(lay)
        {                           
            lay = strtok(NULL,",");
            cot++;
            if(cot==5)
            {
                if( strcmp(lay, x) == 0 )
                {
                    count+=1;
                    break;
                }
            }
        }      
    }
    fprintf(result,"%d", count);
    fclose(result);
    fclose(emp);
}

void nam_nu(char c[])
{
    char *lay;
    char chuoi[100];
    char *tam;
    int cot ;
    FILE *emp;
    FILE *res;
    emp = fopen("Employee.csv","r");
    res = fopen("result.csv", "wt");
    while(fgets(chuoi, 100, emp))
    {
        
        cot = 0;
        tam = strdup(chuoi);
        tam = strtok(tam,"\r\n");
        lay = strtok(chuoi,",");
        while(lay)
        {                           
            lay = strtok(NULL,",");
            cot++;
            if(cot==3)
            {
                if( strcmp(lay, c) == 0 )
                {   
                    fprintf(res,"%s\n",tam);            
                    break;
                }
            }
        }      
    }
    fclose(emp);
    fclose(res);
}

void rep(double n)
{
    char *lay;
    char chuoi[100];
    char *one;
    int cot ;
    FILE *res;
    FILE *pg;
    pg = fopen("Progress.csv","r");
    res = fopen("result.csv", "wt");
    while( fgets(chuoi, 100, pg) )
    {
        cot = 0;
        lay = strtok(chuoi,",");
        while(lay)
        {                                      
            lay = strtok(NULL,",");
            cot++;
            if (cot==2)
            {
                if( atof(lay) == n)
                {
                    fprintf(res, "%s\n", chuoi );
                }
            }
        }
    }
    fclose(pg);
    fclose(res);
}

void ave(char x[])
{
    double tbc = 0;
    int f = 0;
    char *lay;
    char chuoi[100];
    FILE *res;
    FILE *pg;
    pg = fopen("Progress.csv","r");
    res = fopen("result.csv", "wt");
    while( fgets(chuoi, 100, pg) )
    {
        lay = strtok(chuoi,",");       
        lay = strtok(NULL,",");
        if( strcmp(x,lay) ==0 )
        {
            lay = strtok(NULL,",");
            tbc += atof(lay);
            f++;
        }
    }
    if (f!=0)
        fprintf(res,"%.3lf",  tbc/f);
    else fprintf(res,"%.3lf", tbc);
    fclose(res);
    fclose(pg);
}

void ctr( char name[])
{
    char chuoi[100];
    char *lay;
    char *dup;
    int cot ;
    FILE *res;
    FILE *emp;
    emp = fopen("Employee.csv","r");
    res = fopen("result.csv", "wt");
    while( fgets(chuoi, 100, emp) )
    {
        cot = 0;
        dup = strdup(chuoi);
        lay = strtok(chuoi,",");
        while(lay)
        {                           
            lay = strtok(NULL,",");
            cot++;
            if(cot==6)
            {
                lw(lay);
                lay = strtok(lay,"\r\n");
                if( strcmp(lay, name)==0)
                {
                    fprintf( res,"%s",dup);
                }
            }
        }      
    }
    fclose(res);
    fclose(emp);
}

void sort_a()
{
    FILE *emp;
    emp = fopen("Employee.csv","r");
    char *lay;
    char chuoi[100];
    int cot ;
    int i,k;
    int f=0;
    NV nv[10000];
    NV temp;
    while( fgets(chuoi, 100, emp) )
    {
        f++;
    }
    input(nv,f); 
    for(i=0; i<f-2;i++)
    {
        for(k=i+1; k<f-1; k++)
        {
            if( strcmp( nv[i].last, nv[k].last) > 0 )
            {
                temp = nv[i];
                nv[i] = nv[k];
                nv[k] = temp;
            }
            if( strcmp( nv[i].last, nv[k].last) == 0 )
            {
                if( strcmp( nv[i].first, nv[k].first) > 0)
                {

                    temp = nv[i];
                    nv[i] = nv[k];
                    nv[k] = temp;
                }
            }
        }
    }
    output(nv,f);
}

void sort_d()
{
    FILE *emp;
    emp = fopen("Employee.csv","r");
    char *lay;
    char chuoi[100];
    int cot ;
    int i,k;
    int f=0;
    NV nv[10000];
    NV temp;
    while( fgets(chuoi, 100, emp) )
    {
        f++;
    }
    input(nv,f);
    for(i=0; i<f-2;i++)
    {
        for(k=i+1; k<f-1; k++)
        {
            if( strcmp( nv[i].last, nv[k].last) < 0 )
            {
                temp = nv[i];
                nv[i] = nv[k];
                nv[k] = temp;
            }
            if( strcmp( nv[i].last, nv[k].last) == 0 )
            {
                if( strcmp( nv[i].first, nv[k].first) > 0)
                {
                    temp = nv[i];
                    nv[i] = nv[k];
                    nv[k] = temp;
                }
            }
        }
    }
    output(nv,f);
}

void input(NV nv[],int n)
{
    FILE *emp;
    emp = fopen("Employee.csv","r");
    int i;
    char *lay;
    char *temp;
    char chuoi[100];
    int cot ;
    fgets(chuoi, 100, emp);
    for(i=0; i<n-1;i++)
    {
        fgets(chuoi, 100, emp);
        cot=0;
        lay = strtok(chuoi,",");
        while(lay)
        {                         
            if( cot == 0)
                nv[i].empl = strdup(lay);
            if( cot == 1)
                nv[i].first = strdup(lay);
            if( cot == 2)
                nv[i].last = strdup(lay);
            if( cot == 3)
                nv[i].gen = strdup(lay);
            if( cot == 4)
                nv[i].date = strdup(lay);
            if( cot == 5)
                nv[i].dep = strdup(lay);
            if( cot == 6)
                nv[i].ctr = strdup(lay);
            lay = strtok(NULL,",");
            cot++;
        }      
    }
    fclose(emp);
}

void output(NV nv[], int n)
{
    FILE *res;
    res = fopen("result.csv","wt");
    int i;
    for(i=0; i<n-1; i++)
    {
        nv[i].ctr = strtok(nv[i].ctr,"\r\n");
        fprintf(res,"%s,%s,%s,%s,%s,%s,%s\n",nv[i].empl, nv[i].first, nv[i].last, nv[i].gen, nv[i].date, nv[i].dep, nv[i].ctr);
    }
    fclose(res);
}

void lw(char s[])
{
    int gam;
    for(gam=0; gam<strlen(s); gam++)
    {
        if (s[gam] >= 65 && s[gam] <= 90 )
        {
            s[gam] = tolower(s[gam]);
        }
    }
}

void err()
{
    FILE *erorr;
    erorr = fopen("check.txt","w");
    fprintf(erorr,"wrong syntax");
    fclose(erorr);
    exit(0);
}

void check_cach(char s[])
{
    int gam;
    int dem=0;
    for(gam=0; gam<strlen(s); gam++)
    {
        if (s[gam] == ' ')
        {
            dem++;
        }
    }
    if(dem>=2) err();
}




