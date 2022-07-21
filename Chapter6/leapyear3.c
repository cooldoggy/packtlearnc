#include <stdio.h>
#include <stdbool.h>
bool isLeapYear(int);
bool LeapYearBool = false;
int main(void){
    int year;
    printf("Determine if a year is a leap year or not.\n\n");
    printf("Enter year: ");
    scanf( "%d" , &year );
    //A simple way of printing the result
    if(isLeapYear(year))
     printf("%d is a leap year\n",year);
    else
     printf("%d is not a leap year\n",year);

     //C-like version??
     printf("%d year is%sa leap year\n" , year , isLeapYear(year) ? " ": " not ");
     return 0;
}
bool isLeapYear(int year ){
    //Leap years not incorporated in calendars until after 1752.
    //If the year is before 1751 the result should be false.
    if(year < 1751) LeapYearBool = false;
    //IF the year is a multiple of 4 it will be a leap year.
    else if((year % 4) != 0)
    {
        LeapYearBool = false;
    }
    else{
        if((year%400)==0){  
            LeapYearBool = true;
        }
        else if((year%100)==0){
            LeapYearBool = false;
        }
        else{
            LeapYearBool = true;
        }
    }
    return LeapYearBool;
}
//program is now corrected with logic from wikipedia