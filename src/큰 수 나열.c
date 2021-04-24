#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
    int one;
    int two;
    int three;
    int four;

    int result;

    printf("첫 번째 수 : ");
    scanf("%d", &one);
    printf("두 번쨰 수 :");
    scanf("%d", &two);
    printf("세 번째 수 :");
    scanf("%d", &three);
    printf("네 번째 수 :");
    scanf("%d", &four);

    //제일 큰 숫자를 고르고 num1에 저장
    if(two >= one && two >= three && two >= four) { //three가 제일 클 경우
        result = one;
        one = two;
        two = result;
    }
    else if(three >= one && three >= two && three >= four) { //three가 제일 클 경우
        result = one; 
        one = three;
        three = result;
    }
    else if(four >= one && four >= two && four >= three) { //four가 제일 클 경우
        result = four;
        one = four;
        four = result;
    }
    //제일 큰 수를 구했으면 two, three, four를 비교하여 더 큰 수를 num2에 저장
    if(three > two) {
        result = two;
        two = three;
        three = two;
    }
    else if(four > two) {
        result = two;
        two = four;
        four = two;
    }
    //제일 큰 수를 구했으면 three, four를 비교하여 더 큰 수를 num2에 저장
     if(four > three) {
        result = three;
        three = four;
        four = three;
    }
    printf("수나열 : %d >= %d >= %d >= %d", one, two, three, four);

    return 0;
}
