#include <stdio.h>

int main() {
    int num1, num2, num3;
    
    printf("Enter 1st number: ");
    scanf("%d", &num1);
    
    printf("Enter 2nd number: ");
    scanf("%d", &num2);
    
    printf("Enter 3rd number: ");
    scanf("%d", &num3);

    // Using logical AND (&&) to check each number cleanly
    if (num1 >= num2 && num1 >= num3) {
        printf("%d is the largest among %d, %d, and %d\n", num1, num1, num2, num3);
    } 
    else if (num2 >= num1 && num2 >= num3) {
        printf("%d is the largest among %d, %d, and %d\n", num2, num1, num2, num3);
    } 
    else {
        printf("%d is the largest among %d, %d, and %d\n", num3, num1, num2, num3);
    }
    
    return 0;
}
