#include <stdio.h>
#include <string.h>
#include <stdlib.h> // malloc(), rand()
// #define _CRT_SECURE_NO_WARINGS
#define SIZE 3

struct Person {
    char name[20];
    int coin;
    int year;
};

int main() {
    struct Person *p;
    double rate = 0.0; // 세율
    double tax[5]; // 세금
    double salary[5]; // 실수령액
    
    p = (struct Person*)malloc(SIZE * sizeof(struct Person));
    
    if(p == NULL) {
        printf("메모리 할당 오류\n");
        exit(1);
    }
    
    for(int i = 0; i < SIZE; i++) {
        printf("%d 번째 직원 이름 입력 : ", i+1);
        scanf("%s", p[i].name); // scanf_s("%s", 12, p[i].name);
        printf("기본급 : ");
        scanf("%d", &p[i].coin);
        printf("근무년수 : ");
        scanf("%d", &p[i].year);
    }
    
    for(int i = 0; i < SIZE; i++) {
        if(p[i].year >= 15)
            rate = 0.05;
        else if(p[i].year >= 10)
            rate = 0.04;
        else if(p[i].year >= 5)
            rate = 0.03;
        else
            rate = 0.02;
        
        tax[i] = p[i].coin * rate; // 세금 구하기
        salary[i] = p[i].coin - tax[i]; // 실수령액 구하기
        printf("이름 : %s, 기본급 : %d, 세금 : %.2f, 실수령액 : %.2f\n", p[i].name, p[i].coin, tax[i], salary[i]);
    }
    
    free(p);
    
    return 0;
}

