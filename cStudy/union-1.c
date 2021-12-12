#include <stdio.h>
#include <string.h>
// #define _CRT_SECURE_NO_WARINGS

union num {
    int a;
    int b;
};

int main() {
    union num u;
    
    u.a = 100;
    // u.b = 100; 공용 메모리이기 때문에 b는 줄 필요가 없다.
    printf("u.a=%d, u.b=%d\n", u.a, u.b);
    
    u.a = 200;
    printf("u.a=%d, u.b=%d\n", u.a, u.b);
    
    u.a = 300;
    printf("u.a=%d, u.b=%d\n", u.a, u.b);
    
    return 0;
}
