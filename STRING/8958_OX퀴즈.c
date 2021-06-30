#include <stdio.h>
#include <string.h>

int main(){
    int num;
    char ox[79];
    scanf("%d", &num);
    
    for(int i=0; i<num; i++){
        int sum=0;
        int count=1;
        scanf("%s\n", ox);
        
        for(int j=0; j<strlen(ox); j++){
            if(ox[j]=='O'){
                sum+=count;
                count++;
            }
            if(ox[j]=='X')
                count=1;
        }
        printf("%d\n", sum);
    }

    return 0;
}
