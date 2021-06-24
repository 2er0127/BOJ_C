//
//  main.c
//  c
//
//  Created by 이선아 on 2021/06/23.
//

#include <stdio.h>

int main(){
    int A, B;
    
    while(scanf("%d %d", &A, &B) != EOF)
    {
        printf("%d\n", A+B);
    }
    
    return 0;
}
