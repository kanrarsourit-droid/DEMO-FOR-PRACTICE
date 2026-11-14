#include <stdio.h>

int main() {
    char op;
    double num1, num2, result;

    // Prompt user for operator
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);

    // Prompt user for two operands
    printf("Enter two numbers: ");
    if (scanf("%lf %lf", &num1, &num2) != 2) {
        printf("Error: Invalid numeric input.\n");
        return 1;
    }

    // Perform operation using switch-case
    switch (op) {
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
            } else {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            }
            break;

        default:
            printf("Error: '%c' is not a valid operator. Please use +, -, *, or /.\n", op);
            break;
    }

    return 0;
}
