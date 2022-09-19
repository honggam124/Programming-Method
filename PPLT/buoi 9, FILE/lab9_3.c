#include <stdio.h>
#include <string.h>
#define MAX 100
int sequential_search(char str[], int length, char k);
void selection_sort(char str[], int length);
int binary_search(char str[], int length, char k);
int main()
{
    char str[MAX];
    int i;
    printf("Enter a filename:");
    FILE *f;
    char *in;
    in = "chuoi.txt";
    f = fopen(in, "r");
    if (f != NULL)
    {
        fgets(str, MAX, f);
    }
    fclose(f);
    int length = strlen(str);
    printf("\nChuoi: ");
    for (i = 0; i < length; i++)
    {
        printf("%c", str[i]);
    }
    char key;
    printf("\nEnter the key: ");
    scanf("%c", &key);
    int choose;
    do
    {
        printf("\nMenu of the algorithms");
        printf("\n1. Search theo sequential search");
        printf("\n2. Search theo binary search");
        printf("\n3. Exit");
        printf("\nChoose one of these search program: ");
        scanf("%d", &choose);
        switch (choose)
        {
        case 1:
            if (sequential_search(str, length, key) == -1)
            {
                printf("\nKhong tim thay");
            }
            else
            {
                printf("\nKey tai vi tri: %d", sequential_search(str, length, key));
            }
            break;

        case 2:
            printf("Chuoi sau khi sap xep:");
            selection_sort(str, length);
            for (i = 0; i < length; i++)
            {
                printf("%c ", str[i]);
            }
       
            if (binary_search(str, length, key) == -1)
            {
                printf("\nKhong tim thay");
            }
            else
            {
                printf("\nKey tai vi tri: %d", binary_search(str, length, key));
            }
            break;

        case 3:
            return 0;

        default:
            printf("Chon sai, vui long chon lai\n");
        }
    } while (choose != 0);
    return 0;
}

int sequential_search(char str[], int length, char k)
{
    int i;
    for (i = 0; i < length; i++)
    {
        if (str[i] == k)
        {
            return i+1;
        }
    }
    return -1;
}

void selection_sort(char str[], int length)
{
    int i, j, temp, min;
    for (i = 0; i < length; i++)
    {
        min = i;
        for (j = i + 1; j < length-1; j++)
        {
            if (str[j] < str[min])
            {
                min = j;
            }
        }
        temp = str[min];
        str[min] = str[i];
        str[i] = temp;
    }
}

int binary_search(char str[], int length, char k)
{
    int mid, left = 0, right = length - 1;
    mid = (left + right) / 2;
    do
    {
        mid = (left + right) / 2;
        char a = str[mid];
        if (k == a)
        {
            return mid;
        }
        else if (k > a)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    } while (left <= right);
    return -1;
}