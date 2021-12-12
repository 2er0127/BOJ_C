#include <stdio.h>
#include <string.h>
// #define _CRT_SECURE_NO_WARINGS

enum weather {SUNNY, CLOUD, RAIN, WIND, SNOW}; // 기호상수로 입력
char *status[] = {"화창합니다", "흐립니다", "비가 옵니다", "바람이 붑니다", "눈이 옵니다"};

int main() {
    enum weather w;
    
    w = WIND;
    
    printf("날씨가 %s\n", status[w]);
    printf("열거형에 할당된 정수 값은 : %d %d %d %d %d\n", SUNNY, CLOUD, RAIN, WIND, SNOW);
    
    return 0;
}
