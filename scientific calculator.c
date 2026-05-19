#include <stdio.h>
#include <math.h>

int main() {

    int choice;
    double num1, num2, result;

    printf("===== SIMPLE SCIENTIFIC CALCULATOR =====\n");

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Sine\n");
    printf("6. Cosine\n");
    printf("7. Tangent\n");
    printf("8. Logarithm\n");
    printf("9. Square Root\n");
    printf("10. Power\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice >= 1 && choice <= 4) {

        printf("Enter two numbers: ");
        scanf("%lf %lf", &num1, &num2);

        if(choice == 1) {
            result = num1 + num2;
            printf("Result = %.2lf", result);
        }

        else if(choice == 2) {
            result = num1 - num2;
            printf("Result = %.2lf", result);
        }

        else if(choice == 3) {
            result = num1 * num2;
            printf("Result = %.2lf", result);
        }

        else if(choice == 4) {

            if(num2 == 0) {
                printf("Division by zero is not possible");
            }

            else {
                result = num1 / num2;
                printf("Result = %.2lf", result);
            }
        }
    }

    else if(choice == 5) {

        printf("Enter angle in radians: ");
        scanf("%lf", &num1);

        result = sin(num1);

        printf("Result = %.2lf", result);
    }

    else if(choice == 6) {

        printf("Enter angle in radians: ");
        scanf("%lf", &num1);

        result = cos(num1);

        printf("Result = %.2lf", result);
    }

    else if(choice == 7) {

        printf("Enter angle in radians: ");
        scanf("%lf", &num1);

        result = tan(num1);

        printf("Result = %.2lf", result);
    }

    else if(choice == 8) {

        printf("Enter number: ");
        scanf("%lf", &num1);

        result = log10(num1);

        printf("Result = %.2lf", result);
    }

    else if(choice == 9) {

        printf("Enter number: ");
        scanf("%lf", &num1);

        result = sqrt(num1);

        printf("Result = %.2lf", result);
    }

    else if(choice == 10) {

        printf("Enter base and exponent: ");
        scanf("%lf %lf", &num1, &num2);

        result = pow(num1, num2);

        printf("Result = %.2lf", result);
    }

    else {
        printf("Invalid choice");
    }

    return 0;
}
