#include <stdio.h>

int main() {
    int sum = 0;
    
    for(int i = 1; i <= 100; i++) {
        sum = sum + i;
    }
    
    printf("Sum of integers 1-100: %d", sum);
    
    return 0;
}