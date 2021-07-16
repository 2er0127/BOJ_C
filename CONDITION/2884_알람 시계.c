#include <stdio.h>

int main(){
    int h, m;
    
    scanf("%d %d\n", &h, &m);
    
    if(m>=45){
        printf("%d %d\n", h, m-45);
    }
    else if(h==0){
        if(m>=45){
            printf("23 %d\n", m-45);
        }
        else{
            printf("23 %d\n", 60-45+m);
        }
    }
    else{
        printf("%d %d\n", h-1, 60-45+m);
    }
    
    return 0;
}

