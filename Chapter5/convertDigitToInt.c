#include <stdio.h>

int main(void){
    char digit5 = '5';
    char digit8 = '8';
    int sumDigits = digit5 + digit8;
    printf("digit5 + digit8 = '5' + '8' = %d (oh, noes!!)\n", sumDigits);
    //result is 109 because decimal value of these char add to 109
    char value5 = digit5 -'0'; //apperently get the numeric value
    char value8 = digit8 - '0';
    sumDigits = value5 + value8;
    printf("value5 + value8 = 5 + 8 = %d (correct!)\n", sumDigits);
    return 0;
}