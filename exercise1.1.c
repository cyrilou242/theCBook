/*
 * Cyril DE CATHEU
 * 08/30/2018
 * The C Book. Exercise 1.1
 * Type in and test Example 1.1 on your system
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Tell the compiler that we intend to use a function called show_message
 * Declaration
 */

void show_message(void);

/*
 * Another function, including its body
 * Definition
 */
int main(){
    int count;

    count=0;
    while(count<10){
        show_message();
        count = count + 1;
    }

    exit(0);
}

/*
 * The body of the simple function
 * Definition
 */

void show_message(void){
    printf("hello\n");
}
