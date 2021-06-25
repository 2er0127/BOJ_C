#include <stdio.h>

int main(){
    int n, count=0, min=1000000, max=-1000000;
    
    scanf("%d\n", &n);
    
    for(int i=0; i<=n; i++){
        scanf("%d ", &count);
        if(max<count) max=count;
        if(min>count) min=count;
    }
   
    printf("%d %d\n", min, max);
 
    
    return 0;
}
