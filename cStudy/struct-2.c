#include <stdio.h>
#include <string.h>
// #define _CRT_SECURE_NO_WARINGS

struct book {
    char bookName[30];
    char name[10];
    char publish[20];
    int price;
};

int main() {
    struct book b; // 구조체 변수 선언
    
    strcpy(b.bookName, "임베디드 C프로그래밍"); // strcpy_s(b.bookName, 30, "임베디드 C프로그래밍");
    strcpy(b.name, "홍길동"); // strcpy_s(b.name, 10, "홍길동");
    strcpy(b.publish, "삼육출판사"); // strcp_s(b.publish, 20, "삼육출판사");
    b.price = 25000;
    
    int sal = 45;
    
    printf("교재명 : %s\n", b.bookName);
    printf("저자 : %s\n", b.name);
    printf("출판사 : %s\n", b.publish);
    printf("책 정가 : %d\n", b.price);
    printf("판매수량 : %d\n", sal);
    printf("판매가격 : %d\n", sal * b.price);
    
    return 0;
}
