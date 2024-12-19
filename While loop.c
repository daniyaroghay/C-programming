#include <stdio.h>

int main() {
    
    int x = 0;
    
    printf("While loop\n");
    while(x>0) {
        printf("This won't print.");
    }
    printf("Condition was false, loop did not execute.");
    
    
    return 0;
}