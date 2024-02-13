#include <stdio.h>

int main()
{
    float a;
    float b;
    float sum;
    float difference;

    printf("Enter first number: \n");
    scanf("%f", &a);
    printf("Enter second number: \n");
    scanf("%f", &b);

    sum = a + b;
    difference = a - b;

    printf("The sum of your two numbers is: %f\n", sum);
    printf("The difference of your two numbers is: %f\n", difference);

    return 0;
}