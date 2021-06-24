//
//  main.c
//  c
//
//  Created by 이선아 on 2021/06/23.
//

#include <stdio.h>

int main(){
    int number;
    int result;
    int A, B, C, D;
    int count=0;
    
    scanf("%d", &number);
    result=number;
    
    while(1)
    {
        A=number/10; // 10의 자리
        B=number%10; // 1의 자리 입력 값의 오른쪽 값
        C=(A+B)%10; // 결과 값의 오른쪽 값
        D=(B*10)+C; // "B" + "C"
        number=D; // D를 number에 넣고 다시 반복
        count++; // 한 번 돌 때마다 +1
        if(D==result)
            break; // D가 입력 값과 같아지면 그만
    }
    printf("%d\n", count);
    
    return 0;
}
