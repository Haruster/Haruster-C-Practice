#include <stdio.h>

int main(void) {
    float x = 1.234;
    printf("x의 데이터 값은 %f입니다.\n", x);
    printf("x의 데이터 값은 %.2f입니다.\n", x); //소수점 두번째 자리까지 출력
    printf("x의 데이터 값은 %.3f입니다.\n", x); //소수점 세번째 자리까지 출력

    return 0;
}
