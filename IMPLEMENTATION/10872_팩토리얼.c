#include <stdio.h>

int main(){
    int N;
    int result=1; // 곱하기는 1
    
    scanf("%d", &N);
    
    for(int i=N; i>0; i--){
        result*=i;
    }
    printf("%d\n", result);
    return 0;
}
