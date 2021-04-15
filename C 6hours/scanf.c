#include <stdio.h>

int main(void) {
   int input;
   float input2;

    printf("input 정수 데이터 값을 입력하세요.\n");

    scanf("%d", &input);

    printf("%d가 반환되었습니다\n", input);

    printf("input 실수 데이터 값을 입력하세요.\n");

    scanf("%f", &input2);

    printf("%f가 반환되었습니다.\n", input2);

    return 0;
}
