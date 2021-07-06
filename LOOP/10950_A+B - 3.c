#include <stdio.h>

int main(){
    int T;
    scanf("%d\n", &T);
    
    for(int i=0; i<T; i++){
        int A, B;
        scanf("%d %d\n", &A, &B);
        printf("%d\n", A+B);
    }
    return 0;
}
