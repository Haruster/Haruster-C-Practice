#include <stdio.h>

int main(void) {
    float data = 0.1234;
    printf("data의 값은 %.2f입니다.\n", data); //소수점 2번째 자리까지 출력함.
    printf("data의 값은 %.3f입니다.\n", data); //소수점 3째 자리까지 출력함.
    double access = 4.1234;
    printf("access의 값은 %lf입니다.\n", access); //double형을 출력할 때는 %lf를 사용함.
    printf("access의 값은 %.2lf입니다.\n", access); //소수점 2번째 자리까지 출력함.
}
