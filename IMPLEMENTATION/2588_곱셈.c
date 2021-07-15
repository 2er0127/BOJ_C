#include <stdio.h>

int main(){
    int a, b;
    int n1=0, n2=0, n3=0;
    
    scanf("%d\n", &a);
    scanf("%d\n", &b);
    
    n1=b/100; //b에서 100나누기=100의 자리 첫번째 자릿수
    n2=(b%100)/10; //b 오른쪽에서 두번째
    n3=b%10; //b 가장 오른쪽
    
    printf("%d\n", a*n3);
    printf("%d\n", a*n2);
    printf("%d\n", a*n1);
    printf("%d\n", a*b);
    
    return 0;
}

