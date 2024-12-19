#include <stdio.h>

int main() {
    float f, c;
    
    printf("Enter temperature in Farheneit: ");
    scanf("%f", &f);
    
    c = (float)(f - 32)*5/9;
    
    printf("Temperature in Celsius: %.2f", c);
    
    return 0;
}