#include <stdio.h>

int main(void) {
    int i = 0; 
    int data = 0;
    
    printf("1-2+3/4*5+6-7+8/9*10 ..... + 996-997+998/999*1000\n");
    printf("-------------------------------------------\n");

    for (i = 1; i <= 1000; i = i = 5) {
        data += i - (i + 1) + (i + 2) / (i + 3) * (i + 4);
        if (i > 996) {
            printf("%d - %d + %d / %d * %d +", i, i + 1, i + 2, i + 3, i + 4);
        }
        else if (i == 1000) {
            printf("%d - %d + %d / %d * %d +", i, i + 1, i + 2, i + 3, i + 4);
        }
    }
    printf(" = %d\n", data);
    return 0;
}
