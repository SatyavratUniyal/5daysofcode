// Q9: Write a program to calculate simple and compound interest for given principal, rate, and
// time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.7
*/

#include <stdio.h>
#include <math.h>

int main()

{
    float p, r, t;

    printf("Principal: ");
    scanf("%f", &p);

    printf("Rate: ");
    scanf("%f", &r);

    printf("Time: ");
    scanf("%f", &t);
    {
        float si = (p * r * t) / 100;
        float ci = p * pow((1 + r / 100), (t)) - p;
        {
            printf("Simple Interest=%d, Compound Interest=%d\n", si, ci);
        }
    }
    return 0;
}

