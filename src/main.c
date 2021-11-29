#include <stdio.h>

#define ONE 1
#define TWO 2

void foo(int* x, int* y) {
    printf("x = %d\n", *x);
    printf("y = %d\n", *y);

    *y = *x;
}

void bar(int* x, int* y) { printf("Bar"); }

void baz(int* x, int* y) { printf("Baz"); }

void hren(int* x, int* y) {
    int x = 10;
    printf("Hren");
}

int main(void) {
    int x = 5;
    int y = 0;

    foo(&x, &y);

    printf("x = %d\n", x);
    printf("y = %d\n", y);

    return 0;
}
