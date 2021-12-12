#include <stdio.h>
#include <string.h>
#include <stdlib.h> // malloc(), rand()
// #define _CRT_SECURE_NO_WARINGS

int main() {
    FILE *fp = NULL;
    int c;
    
    fp = fopen("/Users/iseon-a/edsystem/alphabet.txt", "r");
    
    if(fp == NULL) {
        fprintf(stderr, "파일을 열 수 없습니다.\n");
        exit(1); // 강제 종료
    }
    
    while((c = fgetc(fp)) != EOF)
        putchar(c);
    
    printf("\n");
    
    fclose(fp);
    
    return 0;
}

