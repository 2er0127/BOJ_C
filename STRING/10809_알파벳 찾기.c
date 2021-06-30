#include <stdio.h>

int main(){
    char s[100];
    
    scanf("%s\n", s);
    
    for(int i=97; i<=122; i++){
        int a=0;
        
        while(s[a]!=0){
            if(s[a]==(char)i) break;
            a++;
        }
        if(s[a]==(char)i)
            printf("%d ",a);
        else
            printf("%d ", -1);
    }
    return 0;
}
