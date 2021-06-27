#include <stdio.h>

int main(){
    int A, B;
    
    scanf("%d %d\n", &A, &B);
    
    if(A>B)
        printf(">\n");
    else if(A<B)
        printf("<\n");
    else
        printf("==\n");
    
    return 0;
}
