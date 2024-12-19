#include <stdio.h>
#define PI 3.14

int main() {
    int s, l, b, r;
    float sq, rt, cl;
    
    //square
    printf("Side of square: ");
    scanf("%d", &s);
    
    sq = (float) s*s;
    
    printf("Area of square: %.2f\n", sq);
    
    //rectangle
    printf("Length and breadth of rectangle: ");
    scanf("%d %d",&l, &b);
    
    rt = (float) l*b;
    
    printf("Area of rectangle: %.2f\n", rt);
    
    //circle
    
    printf("Radius of circle: ");
    scanf("%d", &r);
    
    cl = (float)PI*r*r;
    
    printf("Area of circle: %.2f", cl);
    
    return 0;
}