#include <stdio.h>
#define SIZE 12345

int main(void) {
    int number[SIZE];
    int i, j;
    
    number[0] = 0;
    number[1] = 0;
    
    for ( i = 2; i < SIZE; i++)
        number[i] = 1;
    
    for (i = 2; i <= 12345; i++) {
        if (number[i] == 1) {
            for (j = i + i; j < 12345; j+=1) {
                number[j] = 0;
            }
        }
        else continue;
    }
}
