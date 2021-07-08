#include <stdio.h>

int main(){
    int c, subNum;
    
    scanf("%d\n", &c); //테스트케이스 수 입력 받기
    
    for(int i=0; i<c; i++){
        int jumsuArr[1000]; //배열크기 subNum+1
        int count=0;
        double result=0.0;
        scanf("%d ", &subNum); //과목 갯수 입력
        for(int j=0; j<subNum; j++){
            scanf("%d ", &jumsuArr[j]);
            count+=jumsuArr[j];
        }
        result=(double)count/subNum; //점수 평균 담기
        int result2=0;
        for(int k=0; k<subNum; k++){
            if(result<jumsuArr[k]){
                result2++;
            }
        }
        printf("%.3f%%\n", (double)result2*100/subNum); //위치파악
    }
    return 0;
}
