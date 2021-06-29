#include <stdio.h>

int main(){
    int a, b, c;
    int result=0;
    int array[10000]={0, };
    
    scanf("%d\n", &a);
    scanf("%d\n", &b);
    scanf("%d\n", &c);
    result=a*b*c;
    
    while(result!=0){
        int i=result%10;
        result/=10;
        array[i]++;
    }
    for(int i=0; i<=9; i++)
        printf("%d\n", array[i]);
    
    return 0;
}
