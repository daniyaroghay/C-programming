#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    float s, area;
    
    printf("Enter length of 3 sides of a triangle: ");
    scanf("%d%d%d",&a, &b, &c);
    
    s = (float)(a + b + c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    
    printf("Area of triangle: %f", area);
    
    return 0;
}