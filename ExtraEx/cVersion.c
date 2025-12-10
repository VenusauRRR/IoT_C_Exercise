#include <stdio.h>

int main() {
#ifdef __STDC_VERSION__
    printf("C version: %ld\n", __STDC_VERSION__);
#else
    printf("C89 / C90 (no __STDC_VERSION__ defined)\n");
#endif
    return 0;
}
