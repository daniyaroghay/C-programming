#include <stdio.h>

int main() {
    
    int x = 0;
    
    printf("Do-while loop\n");
    
    do {
        printf("Loop is excuted atleast once.\n");
    }
    while(x>0);
    
    printf("Loop was executed once, even though the condition wasn't true.");
    
    return 0;
}