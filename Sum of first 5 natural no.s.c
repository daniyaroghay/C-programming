#include <stdio.h>

int main() {
    int sum = 0;
    
    for(int i = 1; i <= 6; i++) {
        sum = sum + i;
    }
    
    printf("Sum of first 5 natural numbers: %d", sum);
    
    return 0;
}