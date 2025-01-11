#include <stdio.h>

int main() {
    
    int sub1, sub2, sub3, sub4, sub5, result;
    float perc;
    
    printf("Enter marks of 5 subjects: ");
    scanf("%d %d %d %d %d", &sub1, &sub2, &sub3, &sub4, &sub5);
    
    perc = (sub1 + sub2 + sub3 + sub4 + sub5)/5;
    
    if(perc>=75) {
        printf("O");
    }
    else if(perc>=60) {
        printf("A");
    }
    else if(perc>=50) {
        printf("B");
    }
    else if(perc>=40) {
        printf("C");
    }
    else {
        printf("F");
    }

    return 0;
}