#include <stdio.h>
#define PI 3.14

int main() {
    int n;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    if (n==0) {
        printf("Zero");
    }
    else if(n>0) {
        printf("Number entered is Positive");
    }
    else printf("Number entered is Negative");
    
    return 0;
}