/* ENE212-0088/2020
COSMAS ITAMALA*/
#include <stdio.h>

// Function to check if a number is palindrome
int isPalindrome(int n)
{
    int reversed = 0, original = n;

    // Reverse the number
    while (n > 0)
    {
        int remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    // Check if the reversed number is equal to the original number
    if (original == reversed)
        return 1; // Palindrome
    else
        return 0; // Not palindrome
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPalindrome(n))
        printf("%d is a palindrome.\n", n);
    else
        printf("%d is not a palindrome.\n", n);

    return 0;
}
