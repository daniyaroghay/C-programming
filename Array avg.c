#include <stdio.h>
int main() {
    
    int data[5], sum=0;
    float avg;

    printf("Enter 5 elements: ");
    
    for(int i=0; i<5; ++i) {
        scanf("%d", &data[i]);
    }
    
    for(int i=0; i<5; ++i) {
        sum= sum + data[i];
    }
    
    avg = (float) sum/5;
    
    printf("Average of array elements is: %.2f", avg);
    
    return 0;
}
