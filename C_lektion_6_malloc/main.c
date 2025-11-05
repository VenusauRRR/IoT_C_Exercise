#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void *createMallocArray(void *p, size_t n);
void *createCallacArray(void *p, size_t n);
void *createReallocArray(void *p, size_t elem_size, size_t n, int *size_count);

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

    // // Övning 1
    // switch (toupper(type))
    // {
    // case 'I':
    //     i_array = (int *)createMallocArray(i_array, n);
    //     for (size_t i = 0; i < n; i++)
    //     {
    //         i_array[i] = i;
    //         printf("i_array[%d]: %d\n", i, i_array[i]);
    //     }
    // free(i_array);
    //     break;
    // case 'F':
    //     f_array = (float *)createMallocArray(f_array, n);
    //     for (size_t i = 0; i < n; i++)
    //     {
    //         f_array[i] = i + 1.1;
    //         printf("f_array[%d]: %.2f\n", i, f_array[i]);
    //     }
    //     break;
    // free(f_array);
    // default:
    //     break;
    // }

    // //Övning 2
    // switch (toupper(type))
    // {
    // case 'I':
    //     i_array = (int *)createCallacArray(i_array, n);
    //     for (size_t i = 0; i < n; i++)
    //     {
    //         // i_array[i] = i;
    //         printf("i_array[%d]: %d\n", i, i_array[i]);
    //     }
    // free(i_array);
    //     break;
    // case 'F':
    //     f_array = (float *)createCallacArray(f_array, n);
    //     for (size_t i = 0; i < n; i++)
    //     {
    //         // f_array[i] = i + 1.1;
    //         printf("f_array[%d]: %.2f\n", i, f_array[i]);
    //     }
    // free(f_array);
    //     break;
    // default:
    //     break;
    // }

    //Övning 3
    int size_count = 0;
    switch (toupper(type))
    {
    case 'I':{
        i_array = NULL;
        i_array = (int *)createReallocArray(i_array, sizeof(int), n, &size_count);
        int i_size = sizeof(i_array)/sizeof(int);
        for (size_t i = 0; i < size_count; i++)
        {
            i_array[i] = i;
            printf("i_array[%d]: %d\n", i, i_array[i]);
        }
        free(i_array);
        break;
    }
        
    case 'F':{
        f_array = NULL;
        f_array = (float *)createReallocArray(f_array, sizeof(float), n, &size_count);
        printf("hello");
        int f_size = sizeof(f_array)/sizeof(float);
        // printf("new f_size %zu\n", f_size);
        for (size_t i = 0; i < size_count; i++)
        {
            f_array[i] = i + 1.1;
            printf("f_array[%d]: %.2f\n", i, f_array[i]);
        }
        free(f_array);
        break;
    }
        
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

void *createCallacArray(void *p, size_t n)
{
    void *temp = calloc(n, sizeof(p));
    if (temp == NULL)
    {
        printf("Fail to build calloc :(\n");
        exit(1);
    }
    return temp;
};

void *createReallocArray(void *p, size_t elem_size, size_t n, int *size_count)
{
    size_t new_size = n < 10 ? (n + 1) : (size_t) (n * 1.1);
    *size_count = new_size;
    printf("new size %zu\n", new_size);
    void *temp = realloc(p, elem_size*new_size);
    if (temp == NULL)
    {
        printf("Fail to build realloc :(\n");
        exit(1);
    }
    return temp;
};