#include <stdio.h>

int main() {
    int n, sum = 0;
    
    printf("Enter value of n: ");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++) {
        sum = sum + i;
    }
    
    printf("Sum of %d natural numbers: %d", n, sum);
    
    return 0;
}