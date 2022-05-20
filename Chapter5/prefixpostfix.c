#include <stdio.h>
int main(void){
    int aValue=5;
    //Demonstrate prefix
    printf("Initial: %d\n" , aValue);
    printf(" Prefix: %d\n" ,++aValue);
    printf("  Final: %d\n\n" , aValue);

    aValue=5;
    //postfix
    printf("Initial: %d\n" , aValue);
    printf(" Prefix: %d\n", aValue++);
    printf("  Final: %d\n\n", aValue);

    //more predictable?
    aValue=5;
    ++aValue;
    printf("++aValue (alone) == %d\n",aValue);
    aValue=5;
    aValue++;
    printf("aValue++ (alone) == %d \n\n",aValue);
    return 0;
}