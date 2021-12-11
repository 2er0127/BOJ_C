#include <stdio.h>
#include <string.h>
#define SIZE 3
// #define _CRT_SECURE_NO_WARINGS

struct student {
    int hak;
    char name[30];
    double grade;
};

int main() {
    struct student s[SIZE];
    
    for(int i = 0; i < SIZE; i++) {
        printf("학번을 입력하세요 : ");
        scanf("%d", &s[i].hak);
        printf("이름을 입력하세요 : ");
        scanf("%s", s[i].name); // scanf_s("%s", s[i].name, 30 * sizeof(char));
        printf("학점을 입력하세요 : ");
        scanf("%lf", &s[i].grade);
    }
    
    printf("\n------------------------------------------\n");
    for(int i = 0; i < SIZE; i++) {
        printf("학번 : %d, 이름 : %s, 학점 : %.1f\n", s[i].hak, s[i].name, s[i].grade);
    }
    printf("\n------------------------------------------\n");
    
    return 0;
}
