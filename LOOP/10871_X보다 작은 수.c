#include <stdio.h>

int main(){
    int N, X, count=0;
    
    scanf("%d %d", &N, &X);
    
    for(int i=1; i<=N; i++){
        scanf("%d ", &count);
        if(count<X)
            printf("%d ", count);
    }
    
    return 0;
}
