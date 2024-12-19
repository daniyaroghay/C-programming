#include <stdio.h>

int main() {
    int a, b, c;
    
    printf("Enter 2 numbers: ");
    scanf("%d %d", &a, &b);
    printf("Original values: a = %d, b = %d\n", a, b);
    
    c = a;
    a = b;
    b = c;
    
    printf("Interchanged values: a = %d, b = %d", a, b);
    
    return 0;
}