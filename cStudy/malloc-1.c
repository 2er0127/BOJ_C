#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// #define _CRT_SECURE_NO_WARINGS



int main() {
    int *p;
    int num;
    
    printf("항목의 갯수는 ? : ");
    scanf("%d", &num);
    p = (int*)malloc(num * sizeof(int));
    
    for(int i = 0; i < num; i++) {
        printf("정수값을 입력하세요 : ");
        scanf("%d", &p[i]);
    }
    
    for(int i = 0; i < num; i++) {
        printf("%d ", p[i]);
    }
    
    printf("\n");
    
    free(p);
    
    return 0;
}

