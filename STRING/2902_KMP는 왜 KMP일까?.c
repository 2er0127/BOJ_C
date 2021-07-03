#include <stdio.h>

int main(void){
    int ch;
    
    while(1){
        ch=getchar();
        
        if(ch>='A' && ch<='Z')
            putchar(ch);
        else if(ch=='\n')
            break;
    }
    printf("\n");
    
    return 0;
}
