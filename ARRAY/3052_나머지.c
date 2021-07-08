#include <stdio.h>

int main(){
    int n[10]={0, };
    int count=0;
    
    for(int i=0; i<10; i++){
        scanf("%d\n", &n[i]);
        n[i]%=42;
    }
    for(int j=0; j<10; j++){
        int no=0; // 위치 주의
        for(int k=j+1; k<10; k++){ //j+1부터
            if(n[j]==n[k]) //같은 수일 때 no++
                no++;
        }
        if(no==0) //같은 수가 없을 때 count++
            count++;
    }
    printf("%d\n", count); //답은 count 출력
    
    return 0;
}
