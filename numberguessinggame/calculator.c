#include <stdio.h>

int main() {
    char operator;
    double num1, num2;

    // Displaying the calculator menu
    printf("Simple Calculator\n");
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);  // The space before %c is to ignore any previous newline character

    // Asking for two numbers
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);

    // Performing the calculation based on the operator
    switch(operator) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
            break;
        case '/':
            // Checking for division by zero
            if (num2 != 0.0)
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            else
                printf("Error! Division by zero.\n");
            break;
        default:
            printf("Invalid operator!\n");
    }

    return 0;
}

