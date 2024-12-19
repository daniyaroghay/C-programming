#include <stdio.h>

int main() {
    int a, b;
    
    printf("Enter 2 numbers: ");
    scanf("%d %d", &a, &b);
    
    printf ("Before swapping,\na : %d\nb : %d\n", a, b);
    
    b = b - a;
    a = b + a;
    b = a - b;
    
    printf("After swapping,\na : %d\nb : %d", a, b);
    
    return 0;
}