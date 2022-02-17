#include <stdio.h>

void printDistance(double);

int main(){
    double feet = 5280.0;
    printDistance(feet);
    printf( "feet = %12.3g\n", feet);
    return 0;
}
// changed to make clearer conversion from feet to yards
void printDistance(double feet ) {
    double yards = feet / 3.0 ;
    printf( "The distance in feet is %12.3g\n", feet );
    printf( "The distance in yards is %12.3g\n", yards);
}
// Has a weird output