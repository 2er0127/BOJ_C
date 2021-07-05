#include <stdio.h>

int main(){
    int A, B;
    int countA=0;
    int countB=0;
    
    scanf("%d %d\n", &A, &B);
    
    while(A!=0){
        countA*=10;
        countA+=A%10;
        A/=10;
    }
    while(B!=0){
        countB*=10;
        countB+=B%10;
        B/=10;
    }
    
    if(countA>countB)
        printf("%d\n", countA);
    else
        printf("%d\n", countB);
    
    return 0;
}
