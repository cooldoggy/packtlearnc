#include <stdio.h>
int main(void){
    char lowerChar = 'b';
    char upperChar = 'M';
    char anUpper = lowerChar - 32;
    char aLower = upperChar + 32;
    printf( "Lower case '%c' can be changed to upper case '%c'\n" , lowerChar, anUpper);
    printf( "Upper case '%c' can be changed to lower case '%c'\n", upperChar, aLower);
    return 0;
}