#include <stdio.h>

int main(){
    int date;
    
    scanf("%d\n", &date);
    
    if(date%4==0 && (date%100!=0 || date%400==0))
        printf("1\n");
    else
        printf("0\n");
    
    return 0;
}
