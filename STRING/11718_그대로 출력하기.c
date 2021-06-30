#include <stdio.h>

int main(){
    int s;
    
    while(1){
        s=getchar();
        
        if(s==EOF) break;
        
        putchar(s);
    }

    return 0;
}
