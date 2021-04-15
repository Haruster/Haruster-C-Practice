#include <stdio.h>

int main(void) {
    int x = 10;
    int y = 5;

    int a, b, c, d, e;

    a = x + y;
    b = x - y;
    c = x * y;
    d = x / y;
    e = x % y;

    printf("x + y = %d\n", a);
    printf("x - y = %d\n", b);
    printf("x * y = %d\n", c);
    printf("x / y = %d\n", d);
    printf("x % y = %d\n", e);

}
