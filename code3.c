// Q3: Write a program to calculate the area and perimeter of a rectangle given its length and
// breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/
#include <stdio.h>

int main()

{
    int l, b;

        printf("Length: ");
        scanf("%d", &l);    

        printf("Breadth: ");
        scanf("%d", &b);

        printf("Area=%d, Perimeter=%d\n", l * b, 2 * (l + b));
 
        return 0;

}
