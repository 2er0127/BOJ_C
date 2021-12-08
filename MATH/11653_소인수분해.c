#include<stdio.h>
 
int n;
 
int main(){
 
    scanf("%d",&n);
 
    for(int i=2; i*i <= n; i++){
        if(n%i==0){
            printf("%d\n",i);
            n /= i;
            i--;
        }
    }
    
    if(n>1)
        printf("%d",n);
 
    return 0;
}
