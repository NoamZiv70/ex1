/******************
Name: Noam Ziv
ID: 216249300
Assignment: ex1
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main() {

    // What bit
    //*******1
    printf("What bit:\n");
    /*Scan two integers (representing number and a position)
    Print the bit in this position. */
    // get the number and position
    int x, i;
    printf("Please enter a number:\n");
    scanf("%d", &x);
    printf("Please enter a position:\n");
    scanf("%d", &i);

    // extract the bit
    int bit = (x >> i) & 1;

    // print the result
    printf("The bit in position %d of number %d is: %d\n", i, x, bit);

    // Set bit
    //*******2
    printf("\nSet bit:\n");
    /*Scan two integers (representing number and a position)
    Make sure the bit in this position is "on" (equal to 1)
    Print the output
    Now make sure it's "off" (equal to 0)
    Print the output */
    // get the number and position
    printf("Please enter a number:\n");
    scanf("%d", &x);
    printf("Please enter a position:\n");
    scanf("%d", &i);

    // turn the bit on
    int num_with_bit_on = x | (1 << i);

    // turn the bit off
    int num_with_bit_off = x & ~(1 << i);

    // print the results
    printf("Number with bit %d set to 1: %d\n", i, num_with_bit_on);
    printf("Number with bit %d set to 0: %d\n", i, num_with_bit_off);

    // Toggle bit
    //********3
    printf("\nToggle bit:\n");
    /*Scan two integers (representing number and a position)
    Toggle the bit in this position
    Print the new number */
    // get the number and position
    printf("Please enter a number:\n");
    scanf("%d", &x);
    printf("Please enter a position:\n");
    scanf("%d", &i);

    // toggle the bit
    num_with_bit_on = x ^ (1 << i);
    // print the result
    printf("Number with bit %d toggled: %d\n", i, num_with_bit_on);
//
    // Even - Odd
    //*******4
    printf("\nEven - Odd:\n");
    /* Scan an integer
    If the number is even - print 1, else - print 0. */
    // get a number:
    printf("Please enter a number: \n");
    scanf("%d", &x);
    // a variable for boolean even / odd
    int even_or_odd = !(x & 1);

    // print 1 if even, 0 if odd
    printf("%d\n", even_or_odd);

    // 3, 5, 7, 11
    //*******5
    printf("\n3, 5, 7, 11:\n");
    /* Scan two integers in octal base
    sum them up and print the result in hexadecimal base
    Print only 4 bits, in positions: 3,5,7,11 in the result. */

    int x1,x2, sum;
    // Get the two octal numbers from the user
    printf("Please enter the first number (octal): \n");
    scanf("%o", &x1);  // %o for octal input
    printf("Please enter the second number (octal): \n");
    scanf("%o", &x2);  // %o for octal input

    // culculate the sum
    sum = x1 + x2;

    // print the sum
    printf("The sum in hexadecimal: %X\n", sum);

    // print the bits at 3, 5, 7, 11
    printf("The 3,5,7,11 bits are: %d%d%d%d\n", (sum >> 3) & 1, (sum >> 5) & 1, (sum >> 7) & 1, (sum >> 11) & 1);

    printf("Bye!\n");

    return 0;
}
