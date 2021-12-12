#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 10
// #define _CRT_SECURE_NO_WARINGS

int main() {
    FILE *fp = NULL;
    int buffer[SIZE];
    
    fp = fopen("/Users/iseon-a/edsystem/binary.bin", "rb"); // rb : 이진 파일 모드로 읽기
    
    if(fp == NULL) {
        fprintf(stderr, "파일을 열 수 없습니다.\n");
        exit(1); // 강제 종료
    }
    
    fread(&buffer, sizeof(int), SIZE, fp);
    for(int i = 0; i < SIZE; i++) {
        printf("%4d", buffer[i]);
    }
    printf("\n");
    
    fclose(fp);
    
    return 0;
}

