//
//  main.c
//  c
//
//  Created by 이선아 on 2021/06/23.
//

#include <stdio.h>

int main(){
    int A, B;
    
    while(1){
        scanf("%d %d", &A, &B);
        if(A==0 && B==0)
            break;
        printf("%d\n", A+B);
    }
    
    return 0;
}
