//
//  main.c
//  c
//
//  Created by 이선아 on 2021/06/23.
//

#include <stdio.h>

int main(){
    int N;
    
    scanf("%d", &N);
    
    for(int i=1; i<=N; i++){ //N 횟수 반복
        for(int j=1; j<=i; j++){ //각 별의 횟수
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
