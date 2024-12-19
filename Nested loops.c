#include <stdio.h>

int main() {
    
    int n;
    
    printf("Enter a no.: ");
    scanf("%d", &n);
    
    if(n>0) {
        if(n%2==0) {
            printf("Number is Positive and even.");
        }
        else printf("Number is Positive and odd.");
    }
    else if(n==0) {
        printf("You entered Zero.");
    }
    else printf("Number is Negative.");
    
    return 0;
}