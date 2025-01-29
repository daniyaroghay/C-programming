#include <stdio.h>
int main() {
    int data[5] = {1, 2, 3, 4, 5};
    
    for(int i = 0; i<5; ++i) {
        printf("Index %d item: %d\n", i, data[i]);
    }
    
    return 0;
}
