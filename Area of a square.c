#include <stdio.h>
int main() {
    int length, area;
    printf("Enter length of square: ");
    scanf("%d", &length);
    
    area = length*length;
    
    printf("Area of square: %d", area);
    
    return 0;
}
