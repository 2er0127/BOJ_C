#include <stdio.h>
#include <string.h>

int dial(int n) {
    switch(n) {
        case 'A' :
        case 'B' :
        case 'C' :
            return 2;
            
        case 'D' :
        case 'E' :
        case 'F' :
            return 3;
            
        case 'G' :
        case 'H' :
        case 'I' :
            return 4;
            
        case 'J' :
        case 'K' :
        case 'L' :
            return 5;
            
        case 'M' :
        case 'N' :
        case 'O' :
            return 6;
            
        case 'P' :
        case 'Q' :
        case 'R' :
        case 'S' :
            return 7;
            
        case 'T' :
        case 'U' :
        case 'V' :
            return 8;
            
        default :
            return 9;
    }
}

int main() {
    char c[15];
    int result = 0;
    
    gets(c);
    
    for(int i = 'A'; i<='Z'; i++) {
        for(int j = 0; j < strlen(c); j++) {
            if(c[j] == i)
                result += dial(i);
        }
    }
    
    result += strlen(c);
    
    printf("%d\n", result);
}
