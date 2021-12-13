#include <stdio.h>

int main() {
    long a = 0 , b = 0, c = 0, x = 1;
    
    scanf("%ld %ld %ld", &a, &b, &c);
    
    if(b >= c) {
        printf("-1");
        return 0;
    }
    
    x = a / (c - b) + 1;
    
    printf("%d", x);
    
    return 0;
}

