#include <stdio.h>

int main(){
    int n[9];
    int max=-100;
    int maxNum=0;
    
    for(int i=1; i<=9; i++){
        scanf("%d\n", &n[i]);
    }
    max=n[0];
    

    
    for(int j=1; j<=9; j++){
        if(n[j]>max){
            max=n[j];
            maxNum=j;
        }
        
    }
    printf("%d\n", max);
    printf("%d\n", maxNum);
 
    
    return 0;
}
