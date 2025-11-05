#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void *createMallocArray(void *p, size_t n);

int main(void)
{
    char type;
    long long temp;
    size_t n;

    printf("Do you want to enter (i)nteger or (f)loat values? ");
    if (scanf(" %c", &type) != 1 || (type != 'i' && type != 'I' && type != 'f' && type != 'F'))
    {
        fprintf(stderr, "Invalid choice. Exiting.\n");
        return 1;
    }

    printf("How many values do you want to enter? ");
    if (scanf("%zu", &temp) != 1 || temp < 0)
    {
        fprintf(stderr, "Invalid number.\n");
        return 1;
    }
    n = (size_t)temp;

    if (n == 0)
    {
        printf("Nothing to do (n = 0).\n");
        return 0;
    }
    int *i_array;
    float *f_array;
    switch (toupper(type))
    {
    case 'I':
        i_array = (int *)createMallocArray(i_array, n);
        for (size_t i = 0; i < n; i++)
        {
            i_array[i] = i;
            printf("i_array[%d]: %d\n", i, i_array[i]);
        }
        break;
    case 'F':
        f_array = (float *)createMallocArray(f_array, n);
        for (size_t i = 0; i < n; i++)
        {
            f_array[i] = i + 1.1;
            printf("f_array[%d]: %.2f\n", i, f_array[i]);
        }
        break;
    default:
        break;
    }

    // TODO
    // Implement so that the user can enter the amount of specified values of specified type!
    // Only positve values are allowed! --> valuse > 0
    // Print out the array of values after the user is done on the same row!

    return 0;
}

void *createMallocArray(void *p, size_t n)
{
    void *temp = malloc(sizeof(p) * n);
    if (temp == NULL)
    {
        printf("Fail to build malloc :(\n");
        exit(1);
    }
    return temp;
};