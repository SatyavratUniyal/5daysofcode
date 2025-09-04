// Q2: Write a program to input two numbers and display their sum, difference, product, and
// quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/
#include <stdio.h>

int main(void)

{
    int x;
    int y;

    printf("Input: ");
    scanf("%i %i", &x, &y);
    {
        printf("Sum=%i, Diff=%i, Product=%i, Quotient=%i\n", x + y, x - y, x * y, x / y);
    }
    return 0;
}