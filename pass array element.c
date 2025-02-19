#include <stdio.h>
void printAge(int age1, int age2){
    printf("%d\n", age1);
    printf("%d", age2);
}

int main() {
    
    int ageArray[] = {2,8,4,12};
    printAge(ageArray[1], ageArray[3]);
    
    return 0;
}