#include <stdio.h>
#include <string.h>

int main(){
    int num;
    int n;
    char strArr[20]={0, };
    
    scanf("%d", &num);
    
    for(int i=0; i<num; i++){
        scanf("%d %s\n", &n, strArr);
        for(int j=0; j<strlen(strArr); j++){
            for(int k=0; k<n; k++)
                printf("%c",strArr[j]);
        }
        printf("\n");
    }
      
    return 0;
}
