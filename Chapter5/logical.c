#include <stdio.h>
#include <stdbool.h>
void printLogicalAND(bool z, bool o);
void printLogicalOR( bool z , bool o);
void printLogicalNOT( bool z , bool o);
int main(void){
    bool one = 1;
    bool zero =0;
    printLogicalAND( zero, one);
    printLogicalOR(zero, one);
    printLogicalNOT(zero,one);
    return 0;
}
void printLogicalAND(bool z , bool o){
    bool zero_zero = z && z;
    bool zero_one = z&&o;
    bool one_zero = o&&z;
    bool one_one = o&&o;
    printf( "AND | %ld | %ld\n", z, o);
    printf( " %ld | %ld | %ld \n",z , zero_zero, zero_one);
    printf( " %ld | %ld | %ld \n\n", o, one_zero, one_one);
}
void printLogicalOR(bool z , bool o){
    bool zero_zero = z || z;
    bool zero_one = z || o;
    bool one_zero = o || z;
    bool one_one = o || o;
    printf( "OR | %ld | %ld\n", z,o);
    printf( " %ld | %ld | %ld \n",z, zero_zero, zero_one);
    printf( " %ld | %ld | %ld \n\n" , o ,one_zero, one_one);
}
void printLogicalNOT(bool z, bool o){
    bool not_zero = !z;
    bool not_one = !o;
    printf( "NOT \n");
    printf( " %ld | %ld \n", z, not_zero);
    printf( " %ld | %ld \n\n", o , not_one);
}