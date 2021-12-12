#include <stdio.h>
#include <string.h>
#include <stdlib.h> // malloc(), rand()
// #define _CRT_SECURE_NO_WARINGS

int main() {
    FILE *fp = NULL;
    
    fp = fopen("/Users/iseon-a/edsystem/alphabet.txt", "w");
    
    if(fp == NULL) {
        fprintf(stderr, "파일을 열 수 없습니다.\n");
        exit(1); // 강제 종료
    }
    
    for(char c = 'a'; c <= 'z'; c++) {
        fputc(c, fp); //한글자씩 파일로 저장
    }
    
    printf("파일이 성공적으로 만들어졌습니다.\n");
    
    fclose(fp);
    
    return 0;
}

