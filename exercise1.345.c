/*
 * Cyril DE CATHEU
 * 08/30/2018
 * The C Book. Exercise 1.345
 * 3) Write a function that returns an integer: the decimal value of a string od digits that it reads using getchar.
 * For example, if it reads 1 followed by 4 followed by 6, it will return 146.
 * Assumptions:
 ** the digits 0-9 are consecutive in the computer's representation
 ** inputs are only valid digits or newline, no error checking
 * 4) Use the function written in 3) to read a sequence of numbers.
 * Put them into an array declared in main, by repeatedly calling the function.
 * Sort them into ascending numerical order.
 * Print the sorted list
 * 5) Print the sorted list in binary, decimal and hexadecimal
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define NUM_NUMBERS 4
#define HEXA_LIMIT 5
/*
 * Declarations
 */
int get_number();

/*
 * Definitions
 */
int get_number(){
    int number, digit, stop;

    stop = 0;
    digit = getchar();
    if(digit == '\n'){
        stop = 1;
        number = 0;
    }
    else
        number = digit - '0';

    while(stop != 1){
        digit = getchar();
        if(digit == '\n')
            stop =1;
        else
            number = number * 10 + (digit - '0');
    }

    return(number);
}

char hexa_converter(int remainder){
    char hexa_char;
    if(remainder>15)
        hexa_char = 'Z'; /*error symbol*/
    if(remainder == 0)
        hexa_char = '0';
    if(remainder == 1)
        hexa_char = '1';
    if(remainder == 2)
        hexa_char = '2';
    if(remainder == 3)
        hexa_char = '3';
    if(remainder == 4)
        hexa_char = '4';
    if(remainder == 5)
        hexa_char = '5';
    if(remainder == 6)
        hexa_char = '6';
    if(remainder == 7)
        hexa_char = '7';
    if(remainder == 8)
        hexa_char = '8';
    if(remainder == 9)
        hexa_char = '9';
    if(remainder == 10)
        hexa_char = 'A';
    if(remainder == 11)
        hexa_char = 'B';
    if(remainder == 12)
        hexa_char = 'C';
    if(remainder == 13)
        hexa_char = 'D';
    if(remainder == 14)
        hexa_char = 'E';
    if(remainder == 15)
        hexa_char = 'F';
    return hexa_char;
}

int main(){
    int numbers[NUM_NUMBERS], count, number, count2;

    count = 0;
    while(count<NUM_NUMBERS){
        printf("Please enter a number\n");
        number = get_number();
        numbers[count] = number;
        count = count + 1;
    }

    /*
     * Traditionnal bubble sort
     */

    count = 0;
    while(count < NUM_NUMBERS -1){
        count2 = count +1;
        while(count2 < NUM_NUMBERS){
            if (numbers[count] > numbers[count2]){
                int temp;
                temp = numbers[count];
                numbers[count] = numbers[count2];
                numbers[count2] = temp;
            }
            count2 = count2 +1;
        }
        count = count + 1;
    }

    /*
     * Print element with a for loop
     */
    printf("Decimal format\n");
    for (count = 0; count < NUM_NUMBERS; count++) {
        printf("\nnumbers[%d] = %d", count, numbers[count]);
    }

    printf("\nBinary format\n");
    /*
     * This implementation can quickly go over INT_MAX. It is made only for the exercise.
     * An implementation with a char array is made for the hexadecimal format.
    */
    for (count = 0; count < NUM_NUMBERS; count++) {
        printf("numbers[%d] = ", count);
        int quotient, remainder, result, power;
        quotient = numbers[count] / 2;
        remainder = numbers[count] % 2;
        result = remainder;
        power =1;
        while(quotient != 0){
            remainder = quotient % 2;
            result = result + pow(10,power)*remainder;
            quotient = quotient / 2;
            power = power + 1;
        }
        printf("%d\n",result);
    }

    printf("\nHexadecimal format\n");
    for(count=0; count<NUM_NUMBERS; count++){
        printf("numbers[%d] = ", count);
        int quotient, remainder, index;
        char remainder_char;
        char result[HEXA_LIMIT] = ""; /*we suppose the number with a limited size here */
        quotient = numbers[count] / 16;
        remainder = numbers[count] % 16;
        remainder_char = hexa_converter(remainder);
        index = HEXA_LIMIT - 1;
        result[index] = remainder_char;
        while(quotient != 0){
            remainder = quotient % 16;
            remainder_char = hexa_converter(remainder);
            index = index -1 ;
            if(index <0){
                printf("The number is too big for the configuration. Try to set HEXA_LIMIT higher. Beggining of number: ");
                quotient = 0;
            }
            else{
                result[index] = remainder_char;
                quotient = quotient / 16;
            }
        }

        /* print the char array */
        index = 0;
        while(result[index] == 0){
            index = index +1;
        }
        int i;
        for(i=index; i<HEXA_LIMIT; i++){
            printf("%c",result[i]);
        }
        printf("\n");
    }

    exit(EXIT_SUCCESS);
}


/*
 * To get all interesting results when testing:
 * try with the values 1234, 54, 2 and 98765432.
 */
