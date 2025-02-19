#include <stdio.h>

 void printAge(int age[]) {
    //print elements of an array
     printf("%d\n", age[0]);
     printf("%d", age[2]);
 }
    
int main() {
    
    int ageArray[] = {2, 8, 4, 12};
    printAge(ageArray);
    return 0;
}