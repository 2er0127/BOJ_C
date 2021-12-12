#include <stdio.h>
#include <string.h>
// #define _CRT_SECURE_NO_WARINGS

struct product {
    char code[10];
    int sal;
    int qty;
};

int main() {
    struct product pro;
    struct product *prd;
    prd = &pro;
    
    int tot = 0; // 단가 * 수량 = 금액
    double vat = 0.0; // 금액 * 10% = 부가세
    double amt = 0.0; // 금액 + 부가세 = 총 금액
    
    strcpy(prd -> code, "k0034");
    prd -> sal = 250;
    prd -> qty = 32;
    
    tot = prd -> sal * prd -> qty;
    vat = tot * 0.1;
    amt = tot + vat;
    
    printf("코드 : %s\n", (*prd).code);
    printf("코드 : %s\n", prd -> code);
    printf("단가 : %d\n", (*prd).sal);
    printf("단가 : %d\n", prd -> sal);
    printf("수량 : %d\n", (*prd).qty);
    printf("수량 : %d\n", prd -> qty);
    printf("금액 : %d\n", tot);
    printf("부가세 : %.2f\n", vat);
    printf("총 금액 : %.2f\n", amt);
    
    return 0;
}
