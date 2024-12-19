#include <stdio.h>

int main() {
    int sum = 0;
    
    for(int i = 1; i <= 99; i=i+2) {
        sum = sum + i;
    }
    
    printf("sum of first 50 odd numbers: %d", sum);
    
    return 0;
}