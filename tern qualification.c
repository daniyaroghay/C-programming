#include <stdio.h>

int main() {
    
    int sub1, sub2, sub3, sub4, sub5, result;
    float perc;
    
    printf("Enter marks of 5 subjects: ");
    scanf("%d %d %d %d %d", &sub1, &sub2, &sub3, &sub4, &sub5);
    
    perc = (sub1 + sub2 + sub3 + sub4 + sub5)/5;
    
    result = (perc>= 35) ? 1 : 0;
    
    if(result==1) {
        printf("Qualified!");
    }
    else {
        printf("Not qualified.");
    }

    return 0;
}