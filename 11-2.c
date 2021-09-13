#include <stdio.h>

struct list { //list라는 이름을 가진 구조체를 정의(생성)한다.
    char name; //문자형
    char gender; //문자형
    int age; //정수형
};

int main(void) {
    struct list st1, st2; //구조체 변수 st1, st2를 선언한다.

    st1.name = 'T'; //구조체 변수 st1에 멤버를 지정한다.
    st1.gender = 'M'; //구조체 변수 st1에 멤버를 지정한다.
    st1.age = 25; //구조체 변수 st1에 멤버를 지정한다.

    st2.name = 'S'; //구조체 변수 st2에 멤버를 지정한다.
    st2.gender = 'F'; // 구초제 변수 st2에 멤버를 지정한다.
    st2.age = 28; //구조체 변수 st2에 멤버를 지정한다.

    printf("이름  성별  나이\n");
    printf("--------------------------\n");

    printf("%c  %c  %d\n", st1.name, st1.gender, st1.age); //st1구조체 변수를 출력한다.
    printf("%c  %c  %d\n", st2.name, st1.gender, st2.age); //st2구조체 변수를 출력한다.

    return 0;
}
