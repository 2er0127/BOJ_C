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
    
    for(int i=1; i<=N; i++){ // N 횟수
        for(int j=N; j>=1; j--){ // N부터 줄어드는데 j>i면 공백, 아니면 *
            if(j>i) printf(" ");
            else printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
