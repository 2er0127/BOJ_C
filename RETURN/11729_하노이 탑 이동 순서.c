#include <stdio.h>
#include <stdlib.h>

int hanoi_count;

void hanoiCount(int count, int start, int end, int m);
void hanoi(int count, int start, int end, int m);

int main() {
    int num;
    scanf("%d", &num);
    
    if(num < 1 || num > 20)
        exit(1);
    
    hanoi_count = 0;
    hanoiCount(num, 1, 3, 2);
    printf("%d\n", hanoi_count);
    
    hanoi(num, 1, 3, 2);
    
    return 0;
}

void hanoiCount(int count, int start, int end, int m) {
    if(count <= 1) {
        hanoi_count++;
        return;
    }
    
    hanoiCount(count - 1, start, m, end);
    hanoi_count++;
    hanoiCount(count - 1, m, end, start);
}

void hanoi(int count, int start, int end, int m) {
    if(count <= 1) {
        printf("%d %d\n", start, end);
        return;
    }
    
    hanoi(count - 1, start, m, end);
    printf("%d %d\n", start, end);
    hanoi(count - 1, m, end, start);
}
