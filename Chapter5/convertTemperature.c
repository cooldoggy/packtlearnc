#include <stdio.h>

double celsiusToFahrenheit(double degreesC );
double fahrenheitToCelsius(double degreesF);

int main(void){
    int c = 0;
    int f=32;
    printf ( "%4d Celsius is %4d Fahrenheit\n", c , (int)celsiusToFahrenheit(c) );
    printf ( "%4d Fahrenheit is %4d Celsius\n\n", f , (int)fahrenheitToCelsius(f) );
    c=100;
    f=212;
    printf ( "%4d Celsius is %4d Fahrenheit\n", c , (int)celsiusToFahrenheit(c) );
    printf ( "%4d Fahrenheit is %4d Celsius\n\n", f , (int)fahrenheitToCelsius(f) );
    c=f=50;
    printf ( "%4d Celsius is %4d Fahrenheit\n", c , (int)celsiusToFahrenheit(c) );
    printf ( "%4d Fahrenheit is %4d Celsius\n\n", f , (int)fahrenheitToCelsius(f) );
    return 0;
}
// Given Celsius, convert to Fahrenheit
double celsiusToFahrenheit(double degreesC){
    double degreesF = (degreesC * 9.0 / 5.0) + 32.0;
    return degreesF;
}
// Given fahrenheit, convert to celsius
double fahrenheitToCelsius(double degreesF){
    double degreesC = (degreesF - 32.0) * 5.0/9.0;
    return degreesC;
}