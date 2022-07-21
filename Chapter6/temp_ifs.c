#include<stdio.h>

void describeTemp( double degreesF );

int main(void){
    describeTemp( 120.0 );
    describeTemp( 90.0 );
    describeTemp( 49.0 );
    describeTemp( 33.0);
    describeTemp( 0.0 );
    describeTemp( 65.0 );
    return 0;
}

void describeTemp( double degreesF ){
    char* message;
    if(degreesF >= 100.0) message = "hot! Stay in the shade!";
    if(degreesF < 100.0  && degreesF >= 80.0) message = "perfect weather to go swimming!";
    if( degreesF < 80.0 && degreesF >= 60.0) message ="very comforable.";
    if( degreesF < 60.0 && degreesF >= 40.0) message = "chilly.";
    if( degreesF < 40.0 && degreesF >= 20.0 ) message = "freezing but good for cold activities.";
    if( degreesF < 20.0 ) message= "really bad, way too cold.";
    printf("%g°F is %s\n", degreesF , message);
}