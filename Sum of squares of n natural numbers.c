#include <stdio.h>

int main() {
    int n, sqr = 0;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++) {
        sqr = (i*i)+sqr;
    }
    
    printf("Sum of squares of n natural numbers: %d", sqr);
    
    return 0;
}