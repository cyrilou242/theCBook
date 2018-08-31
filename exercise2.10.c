/*
 * Cyril DE CATHEU
 * 08/31/2018
 * The C Book. Exercise 2.10
 * Implement Example 2.2 in order to answer questions found in exercise2.1011121314.md
 */

#include <stdio.h>
#include <stdlib.h>
#define BOILING 212  /* degrees Farenheit */

int main(){
    float f_var;
    double d_var;
    /* long double weren't correctly managed on the Cygwin used */
    long double l_d_var;
    int i;

    i=0;
    printf("Fahrenheit to Centigrade\n");
    while(i <= BOILING){
        l_d_var = 5 * (i-32);
        l_d_var = l_d_var/9;
        d_var = l_d_var;
        f_var = l_d_var;
        /*Replace %Lf by %lf depending on the machine and the compiler used*/
        printf("%d %f %f %Lf\n", i ,f_var, d_var, l_d_var);
        i = i + 1;
    }

    exit(EXIT_SUCCESS);
}


