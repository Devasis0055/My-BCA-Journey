#include <stdio.h>

int main() {
    char operator;
    double n1, n2;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("Enter two operands: ");
    scanf("%lf %lf", &n1, &n2);

    switch (operator) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", n1, n2, n1 + n2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", n1, n2, n1 - n2);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", n1, n2, n1 * n2);
            break;
        case '/':
            if (n2 != 0)
                printf("%.2lf / %.2lf = %.2lf\n", n1, n2, n1 / n2);
            else
                printf("Error! Division by zero.\n");
            break;
        default:
            printf("Error! Invalid operator.\n");
    }
    return 0;
}
