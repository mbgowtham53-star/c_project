Here is a simple C program to find the largest of three numbers using an if-else statement:

C
Copy code
#include <stdio.h>

int main() {
    int num1, num2, num3, largest;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Compare numbers
    if (num1 >= num2 && num1 >= num3) {
        largest = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        largest = num2;
    } else {
        largest = num3;
    }

    // Output the largest number
    printf("The largest number is: %d\n", largest);

    return 0;
}

Alternative 1: Using a Ternary Operator
C
Copy code
#include <stdio.h>

int main() {
    int num1, num2, num3, largest;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Find the largest using ternary operators
    largest = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

    // Output the largest number
    printf("The largest number is: %d\n", largest);

    return 0;
}

Alternative 2: Using a Function
C
Copy code
#include <stdio.h>

// Function to find the largest of two numbers
int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int num1, num2, num3, largest;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Find the largest using the max function
    largest = max(num1, max(num2, num3));

    // Output the largest number
    printf("The largest number is: %d\n", largest);

    return 0;
}


Each approach is efficient and can be chosen based on your preference or the complexity of your program.
