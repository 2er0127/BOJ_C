#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// #define _CRT_SECURE_NO_WARINGS

typedef struct u {
    int id;
    char name[12];
    char email[20];
} USER;

void printUser(USER *uuu);

int main() {
    USER us1, us2;
    
    us1.id = 10;
    strcpy(us1.name, "이순신"); // strcpy_s(us1.name, 12, "이순신");
    strcpy(us1.email, "lee@google.com"); // strcpy_s(us1.email, 20, "lee@google.com");
    
    us2.id = 20;
    strcpy(us2.name, "이아랑");
    strcpy(us2.email, "leearang@naver.com");

    printUser(&us1); // 구조체 함수 호출
    printUser(&us2); // 구조체 함수 호출

    return 0;
}

void printUser(USER *uuu) {
    printf("번호 : %d, 이름 : %s, eMail : %s\n", uuu->id, uuu->name, uuu->email);
}
