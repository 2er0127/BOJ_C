#include <stdio.h>
#include <string.h>
#include <stdlib.h> // malloc(), rand()
// #define _CRT_SECURE_NO_WARINGS

struct Book {
    int num;
    char title[100];
};

int main() {
    struct Book *p;
    
    p = (struct Book*)malloc(2 * sizeof(struct Book));
    
    if(p == NULL) {
        printf("메모리 할당 오류\n");
        exit(1);
    }
    
    p[0].num = 1; // (*p).num = 1;
    strcpy(p[0].title, "C Programming"); // strcpy_s(p[0].title, 100, "C Programming");
    
    p[1].num = 2; // (*p+1).num = 2;
    strcpy(p[1].title, "JAVA Programming"); // strcpy_s(p[1].title, 100, "JAVA Programming");
    
    for(int i = 0; i < 2; i++) {
        printf("%d 번째 책 제목 : %s\n", p[i].num, p[i].title);
    }
    
    free(p);
    
    return 0;
}

