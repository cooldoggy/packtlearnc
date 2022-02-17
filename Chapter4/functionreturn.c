#include <stdio.h>

double inchesToFeet(double);

int main(){
    double inches = 1024.0;
    double feet = inchesToFeet(inches);
    printf( "%12.3g inches is equal to %12.3g feet.\n", inches , feet);
    return 0;
}

double inchesToFeet(double someInches){
    double someFeet = someInches / 12.0;
    return someFeet;
}