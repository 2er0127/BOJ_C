#include <stdio.h>

int main(){
    int n; // 과목 갯수
    double max=0.0; // 최댓값
    
    scanf("%d\n", &n);
    double arr[n];
    double result=0.0;
    
    for(int i=0; i<n; i++){
        scanf("%lf ", &arr[i]);
    }
    
    for(int i=0; i<n; i++){
        if(arr[i]>max)
            max=arr[i];
    }
    for(int i=0; i<n; i++){
        result+=(arr[i]/max)*100;
    
    }
    printf("%.1lf\n", result/n);
    
    return 0;
}
