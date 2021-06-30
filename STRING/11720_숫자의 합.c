#include <stdio.h>

int main(){
    int num, sum=0;
    
    scanf("%d\n", &num);
    char n[num];
    scanf("%s", n);
    
    for(int i=0; i<num; i++){
        sum+=n[i] - '0'; //'0'은 아스키 코드 48, -48해도 된다.
    }
    
    printf("%d\n", sum);
    
    return 0;
}
