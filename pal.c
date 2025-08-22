Here is a simple C program to check whether a given string is a palindrome or not:

C
Copy code
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], reversed[100];
    int length, i, isPalindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    length = strlen(str);

    // Reverse the string
    for (i = 0; i < length; i++) {
        reversed[i] = str[length - i - 1];
    }
    reversed[length] = '\0'; // Null-terminate the reversed string

    // Compare original and reversed strings
    for (i = 0; i < length; i++) {
        if (str[i] != reversed[i]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("The string '%s' is a palindrome.\n", str);
    } else {
        printf("The string '%s' is not a palindrome.\n", str);
    }

    return 0;
}

Explanationsed
Input: The user enters a string.
Reverse: The program reverses the string and stores it in a new array.
Comparison: It compares the original string with the reversed one.
Output: If both are identical, the string is a palindrome; otherwise, it is not.

This program is simple and works for single-word strings. For multi-word strings or case-insensitive checks, additional modifications would be needed.
