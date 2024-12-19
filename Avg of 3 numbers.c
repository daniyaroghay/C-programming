#include <stdio.h>
#include <math.h>

int main() {
    
    int a, b, c;
    float avg;
    
    printf("Enter 3 no.s: ");
    scanf("%d%d%d", &a, &b, &c);
    
    avg = (float) (a+b+c)/3;
    
    printf("average: %f", avg);
    
    return 0;
}