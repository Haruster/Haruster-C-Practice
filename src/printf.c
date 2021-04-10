//printf 출력.c
//%d는 10진수 출력
#include <stdio.h>

int main(void) {

    printf("서식이 있는 것을 출력합니다. \n"); //\n은 한칸 건너뛰기
    printf("%d\n", 1000);

    printf("%d %d\n", 1, 2, 3);
    printf("%s\n", "문자열을 처리합니다"); //%s는 문자열 출력

    return 0;

}
