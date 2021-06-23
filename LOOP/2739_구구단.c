//
//  main.c
//  구구단
//
//  Created by 이선아 on 2021/06/23.
//

#include <stdio.h>

int main()
{
    int N;
    
    scanf("%d", &N);
    
    for(int i=1; i<=9; i++){
        printf("%d * %d = %d\n", N, i, N * i);
    }
    
    return 0;
}
