#include <stdio.h>

int main() {
    int f, s, sum, dif, mul;
    float div;
    
    printf("Enter 2 numbers: ");
    scanf("%d %d", &f, &s);
    
    sum = f + s;
    dif = f ;
    mul = f*s;
    div = (float) f/s;
    
    printf("Sum : %d\nDifference : %d\nProduct : %d\nDivision : %.2f", sum, dif, mul, div );
    
    return 0;
}