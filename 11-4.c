#include <stdio.h>

struct students { //students라는 구조체를 정의(생성)한다.
    char name[20]; //문자형
    char address[30]; //문자형
    int age; //정수형
};

typedef struct students student; //구조체를 재정의한다. (struct students -> student)

int main(void) {
    student st1 = {"Moon", "Seoul", 25}; //구조체 변수 st1 초기화
    struct students st2 = {"John", "London", 30}; //구조체 변수 st2 초기화

    printf("학생1은 성이 %s이고 %s에 살며 %d살이다.\n", st1.name, st1.address, st1.age); //구조체 변수 st1 출력
    printf("학생2는 성이 %s이고 %s에 살며 %d살이다.\n", st2.name, st2.address, st2.age); //구조체 변수 st2 출력

    return 0;
}
