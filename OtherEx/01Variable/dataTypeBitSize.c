#include <stdio.h>
#include <limits.h>
#include <float.h>

void printDataTypeAndBitSize(void){
    printf("signed Char min: %d -> bit size: %d\n",SCHAR_MIN, sizeof(SCHAR_MIN));
    printf("signed char max: %d -> bit size: %d\n", SCHAR_MAX, sizeof(SCHAR_MAX));
    printf("unsigned char min: --\n");
    printf("unsigned char max: %d -> bit size: %d\n\n", UCHAR_MAX, sizeof(UCHAR_MAX));

    printf("int min: %d -> bit size: %d\n", INT_MIN, sizeof(INT_MIN));
    printf("int max: %d -> bit size: %d\n", INT_MAX, sizeof(INT_MAX));
    printf("unsigned int min: --\n");
    printf("unsigned int max: %u -> bit size: %d\n\n", UINT_MAX, sizeof(UINT_MAX));

    printf("short min: %hd -> bit size: %d\n", SHRT_MIN, sizeof(SHRT_MIN));
    printf("short max: %hd -> bit size: %d\n", SHRT_MAX, sizeof(SHRT_MAX));
    printf("unsigned short min: --\n");
    printf("unsigned short max: %hu -> bit size: %d\n\n", USHRT_MAX, sizeof(USHRT_MAX));

    printf("signed long min: %ld -> bit size: %d\n", LONG_MIN, sizeof(LONG_MIN));
    printf("signed long max: %ld -> bit size: %d\n", LONG_MAX, sizeof(LONG_MAX));
    printf("unsigned long min: --\n");
    printf("unsigned long max: %lu -> bit size: %d\n\n", ULONG_MAX, sizeof(ULONG_MAX));

    printf("signed long long min: %lld -> bit size: %d\n", LLONG_MIN, sizeof(LLONG_MIN));
    printf("signed long long max: %lld -> bit size: %d\n", LLONG_MAX, sizeof(LLONG_MAX));
    printf("unsigned long long min: --\n");
    printf("unsigned long long max: %llu -> bit size: %d\n\n", ULLONG_MAX, sizeof(ULLONG_MAX));

    printf("float min: %e -> bit size: %d\n", FLT_MIN, sizeof(FLT_MIN));
    printf("float max: %e -> bit size: %d\n", FLT_MAX, sizeof(FLT_MAX));
    printf("unsigned float min: --\n");
    printf("unsigned float max: --\n\n");

    printf("double min: %e -> bit size: %d\n", DBL_MIN, sizeof(DBL_MIN));
    printf("double max: %e -> bit size: %d\n", DBL_MAX, sizeof(DBL_MAX));
    printf("unsigned double min: --\n");
    printf("unsigned double max: --\n\n");

    printf("****long double min: %e -> bit size: %d\n", LDBL_MIN, sizeof(LDBL_MIN));
    printf("****long double max: %e -> bit size: %d\n", LDBL_MAX, sizeof(LDBL_MAX));
    printf("unsigned long double min: --\n");
    printf("unsigned long double max: --\n\n");
    
}