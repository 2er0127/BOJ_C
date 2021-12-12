#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// #define _CRT_SECURE_NO_WARINGS

int main() {
    FILE *fp; // 기존 내용이 존재하기 때문에 NULL을 줄 수 없다.
    int buffer[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    
    fp = fopen("/Users/iseon-a/edsystem/binary.bin", "wb"); // wb : 이진 파일 모드로 쓰기
    
    if(fp == NULL) {
        fprintf(stderr, "파일을 열 수 없습니다.\n");
        exit(1); // 강제 종료
    }
    
    fwrite(&buffer, sizeof(int), 10, fp);
    printf("이진 파일 모드로 쓰기 완료했습니다.\n");
    
    fclose(fp);
    
    return 0;
}

