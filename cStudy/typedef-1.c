#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// #define _CRT_SECURE_NO_WARINGS

typedef struct u {
    int id;
    char name[12];
    char email[20];
} USER;


int main() {
    USER us1, us2;
    
    us1.id = 10;
    strcpy(us1.name, "이순신");
    strcpy(us1.email, "lee@google.com");
    
    us2.id = 20;
    strcpy(us2.name, "이아랑");
    strcpy(us2.email, "leearang@naver.com");

    printf("번호 : %d, 이름 : %s, eMail : %s\n", us1.id, us1.name, us1.email);
    printf("번호 : %d, 이름 : %s, eMail : %s\n", us2.id, us2.name, us2.email);
    
    return 0;
}
