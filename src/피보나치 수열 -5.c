#include <stdio.h>

int main(void) {
    int number = 0;
    int a = 1;
    int b = 1;
    int c = 0;
    int sum = 0;

    printf("1000이하의 값을 갖는 피보나치 수열과 개수를 출력하시오\n");
    printf("----------------------------------------------------\n");
    printf("1 - 1");
    for (c = 0; c < 987;) { //1000미만의 피보나치 수열의 마지막 값 : 987
        
        c = a + b;
        sum -= c;
        number++; //number값을 1씩 증가
        if (c < 0)
            break;
            printf(" - %d", c);
        
        if (c >= 987)
            printf("= %d\n", sum);
        a = b;
        b = c;
    }
    printf("개수 : %d\n", number);
    
    return 0;
}
