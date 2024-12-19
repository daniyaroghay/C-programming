#include <stdio.h>
#include <math.h>

int main() {
    
    int l, a, p;
    
    printf("Enter length of a square: ");
    scanf("%d", &l);
     a = l*l;
     p = l*4;
     
     printf("Area: %d\nPerimeter: %d", a, p);
    
    return 0;
}
