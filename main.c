#include <stdio.h>

#ifdef FIRST_MAIN
int main() {

    printf("Hello World");

    for (int i = 0; i < 100000; ++i) {
        printf("%d", i);
    }

    return 0;
}
#endif



