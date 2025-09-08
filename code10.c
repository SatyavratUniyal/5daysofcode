// Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/
#include <stdio.h>
#include <math.h>

int main()

{
    int s;

    printf("Time in Seconds: ");
    scanf("%d", &s);
    {
        printf("%d:%d:%d\n", s / 3600, (s % 3600) / 60, ((s % 3600) % 60));
    }

}
