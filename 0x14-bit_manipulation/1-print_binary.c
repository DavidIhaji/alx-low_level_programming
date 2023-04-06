/* binary_print.c */

#include <stdio.h>
#include "main.h"

/* Function to print binary representation of a number */
void print_binary(unsigned long int n) {
    int i;

    // Find the most significant bit
    unsigned long int msb = 1UL << (sizeof(unsigned long int) * 8 - 1);

    // Iterate through each bit from MSB to LSB
    for (i = 0; i < SIZE_OF_ULI; i++) {
        // Check if the current bit is set
        if ((n & msb) != 0)
            printf("1");
        else
            printf("0");

        // Shift the bit to the right by 1
        n <<= 1;
    }

    printf("\n");
}
