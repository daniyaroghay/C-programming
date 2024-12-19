#include <stdio.h>

int main() {
    
    int a, b, c;
    
    printf("Enter 3 no.s: ");
    scanf("%d %d %d", &a, &b, &c);
    
    if(a < b && a < c) {
        printf("%d is the smallest", a);
    }
    else if(b < c && b < a) {   
        printf("%d is the smallest", b);
    }
    else printf("%d is the smalleest", c);
    
    return 0;
}