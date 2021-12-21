#include <stdio.h>

int re(int n) {
    int result = 1;
    
    if(n == 0)
        return 1;
    
    result = n * re(n-1);
    
    return result;
}

int main() {
    int num;
    
    scanf("%d", &num);
    
    printf("%d\n", re(num));
    
    return 0;
}
