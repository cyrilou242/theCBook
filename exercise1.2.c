/*
 * Cyril DE CATHEU
 * 08/30/2018
 * The C Book. Exercise 1.2
 * Using Example 1.2 as a pattern, write a program that prints prime pairs.
 * A prime pair is 2 prime numbers that differ by 2.
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX_PRIME_NUMBER 1000

int main(){
    int this_number, divisor, not_prime;
    int previous_prime;

    this_number =3;
    previous_prime =3;

    while(this_number < MAX_PRIME_NUMBER){
        divisor = this_number / 2;
        not_prime = 0;
        while(divisor > 1){
            if(this_number % divisor == 0){
                not_prime = 1;
                divisor = 0;
            }
            else
                divisor = divisor-1;
        }

        if(not_prime == 0) {
            if (this_number - previous_prime == 2)
                printf("%d and %d are 2 prime numbers that differ by 2\n", this_number, previous_prime);
            previous_prime = this_number;
        }
        this_number = this_number + 1;

    }
    exit(EXIT_SUCCESS);
}
