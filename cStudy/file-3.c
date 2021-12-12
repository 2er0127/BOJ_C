#include <stdio.h>
#include <string.h>
#include <stdlib.h> // malloc(), rand()
// #define _CRT_SECURE_NO_WARINGS

int main() {
    FILE *fp; // 기존 내용이 존재하기 때문에 NULL을 줄 수 없다.
    
    fp = fopen("/Users/iseon-a/edsystem/alphabet.txt", "a");
    
    if(fp == NULL) {
        fprintf(stderr, "파일을 열 수 없습니다.\n");
        exit(1); // 강제 종료
    }
    
    fprintf(fp, "%d seona\n", 2019100991);
    printf("파일이 성공적으로 추가되었습니다.\n");
    
    fclose(fp);
    
    return 0;
}

