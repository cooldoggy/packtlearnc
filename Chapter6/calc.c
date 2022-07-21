#include <stdio.h>
#include <stdbool.h>

double calc( double operand1, char operator, double operand2);

int main(void){
    calc(1.0, '+', 2.0);
    calc(10.0,'-',7.0);
    calc(4.0,'*',2.3);
    calc(5.0,'/',0.0);
    calc(5.0,'%',2.0);
    calc(5.3, '%', 3.0);
    calc(1.0, '?', 2.0);
    return 0;

}

double calc( double operand1, char operator, double operand2){
    double result = 0.0;
    printf("%g %c %g = ", operand1, operator, operand2);
    switch(operator){
        case '+': result = operand1 + operand2; break;
        case '-': result = operand1 - operand2; break;
        case '*': result = operand1 * operand2; break;
        case '/':
        if(operand2 == 0.0){
            printf("Error: Division by Zero is Undefined.\n");
            return result;
        }
        else{
            result = operand1 / operand2; break;}
        case '%': (int) operand1 % (int) operand2; break;
        /* Casting required due to modulo being an integer only operator */
        default: 
        printf("Error: The operator is not valid, please use + - * / or %%\n");
        return result;
    }
    printf("%g\n",result);
    return 0;
}