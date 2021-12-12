#include <stdio.h>
#include <string.h>
#include <stdlib.h> // malloc(), rand()
// #define _CRT_SECURE_NO_WARINGS
#define SIZE 1000



int main() {
    int *p;
    int num;
    int sum = 0;
    double avg = 0.0;
    
    printf("과목 갯수 : ");
    scanf("%d", &num);
    
    p = (int*)malloc(num * sizeof(int));
    
    for(int i = 0; i < num; i++) {
        printf("%d 번째 점수 입력 : ", i + 1);
        scanf("%d", &p[i]);
    }
    
    for(int i = 0; i < num; i++) {
        printf("과목 점수 : %d\n", p[i]);
        sum += p[i];
        avg = (double) sum / num;
    }
    
    printf("과목 합계 : %d\n", sum);
    printf("과목 평균 : %.2f\n", avg);
    
    return 0;
}

