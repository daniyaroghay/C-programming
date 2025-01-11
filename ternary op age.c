#include <stdio.h>

int main() {
    int age, result;
    printf("Enter age: ");
    scanf("%d", &age);
    result = (age >= 18) ? 1 : 0;
    printf("Result: %d", result);

    return 0;
}