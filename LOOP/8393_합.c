//
//  main.c
//  cstudy
//
//  Created by 이선아 on 2021/06/19.
//

#include <stdio.h>

int main(){
    int n;
    int result=0;
    
    scanf("%d", &n);
    
    for(int i=1; i<=n; i++){
        result+=i;
    }
    printf("%d\n", result);
    
    return 0;
}
