/*ENE212-0088/2020
COSMAS ITAMALA*/
#include <stdio.h>
#include <math.h>

// Function to count the number of digits in a number
int countDigits(int n)
{
    int count = 0;
    while (n != 0)
    {
        n /= 10;
        count++;
    }
    return count;
}

// Function to check if a number is an Armstrong number
int isArmstrong(int n)
{
    int numDigits = countDigits(n);
    int originalNumber = n;
    int sum = 0;

    // Calculate the sum of digits raised to the power of the number of digits
    while (n != 0)
    {
        int digit = n % 10;
        sum += pow(digit, numDigits);
        n /= 10;
    }

    // Check if the sum equals the original number
    if (sum == originalNumber)
        return 1; // Armstrong number
    else
        return 0; // Not Armstrong number
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (isArmstrong(n))
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);

    return 0;
}
