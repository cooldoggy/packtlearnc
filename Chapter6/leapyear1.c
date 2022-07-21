#include <stdio.h>
#include <stdbool.h>
bool isLeapYear(int);
int main(void){
    int year;
    printf("Determine if a year is a leap year or not.\n\n");
    printf("Enter year: ");
    scanf( "%d" , &year );
    //I've heard scanf is vunreable and shouldn't be used.
    //A simple way of printing the result
    if(isLeapYear(year))
     printf("%d is a leap year\n",year);
    else
     printf("%d is not a leap year\n",year);

     //C-like version??
     printf("%d year is%sa leap year\n" , year , isLeapYear(year) ? " ": " not ");
     return 0;
}\
bool isLeapYear(int year ){
    //Leap years not incorporated in calendars until after 1752.
    //If the year is before 1751 the result should be false.
    if(year < 1751) return false;
    //IF the year is a multiple of 4 it will be a leap year.
    if((year % 4) == 0) return true;
    return false;
}
//program is technically incorrect due to leap centuries. since each year is actually 365.2425 days