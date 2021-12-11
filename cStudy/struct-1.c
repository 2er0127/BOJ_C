#include <stdio.h>
#include <string.h>
// define _CRT_SECURE_NO_WARINGS

struct student {
    int number; // %d
    char name[10]; // %s
    double grade; // %f
};

int main() {
    struct student s; // 구조체 변수 선언
    
    s.number = 2019100991;
    strcpy(s.name, "이선아"); // 문자열을 사용하기 위해서는 strcpy 함수를 이용해야 한다.
    s.grade = 4.5;
    
    printf("학번 : %d\n", s.number);
    printf("이름 : %s\n", s.name);
    printf("학점 : %.1f\n", s.grade);
    
    return 0;
}
