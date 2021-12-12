#include <stdio.h>
#include <string.h>
#include <stdlib.h> // malloc(), rand()
// #define _CRT_SECURE_NO_WARINGS
#define SIZE 1000



int main() {
    int *p;
    int max = -9999;
    
    p = (int*)malloc(SIZE * sizeof(int));
    if(p == NULL) {
        printf("메모리 할당 오류\n");
        exit(1);
    }
    
    for(int i = 0; i < SIZE; i++) {
        p[i] = rand();
    }
    
    for(int i = 0; i < SIZE; i++) {
        if(p[i] > max)
            max = p[i];
    }
    
    printf("최대값 = %d\n", max);
    
    free(p);
    
    return 0;
}

