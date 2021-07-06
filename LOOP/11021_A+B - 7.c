#include <stdio.h>

int main(){
    int T;
    int A, B;
    
    scanf("%d\n", &T);
    
    for(int i=1; i<=T; i++){
        scanf("%d %d\n", &A, &B);
        printf("Case #%d: %d\n", i, A+B);
    }
    return 0;
}
