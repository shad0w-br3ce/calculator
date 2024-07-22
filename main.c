#include <stdio.h>
#include <math.h>
#include <string.h>

// Function prototypes
float add(float a, float b);
float sub(float a, float b);
float mul(float a, float b);
float div(float a, float b);
float square(float a);
float square_root(float a);

int main(int argc, char const *argv[])
{
    int choice;
    float a, b, result;
    char str[50];

    while (1) {
        // Display menu options
        printf("\nSelect an operation to perform the calculation in C calculator:\n");

        printf("%-25s %s\n", "1 Addition", "2 Subtraction");
        printf("%-25s %s\n", "3 Multiplication", "4 Division");
        printf("%-25s %s\n", "5 Square", "6 Square Root");
        printf("%-25s %s\n", "7 Exit", "");

        printf("Please, make a choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                strcpy(str, "You chose: Addition");
                printf("%s\n", str);

                printf("Enter first number: ");
                scanf("%f", &a);

                printf("Enter second number: ");
                scanf("%f", &b);

                result = add(a, b);

                printf("Addition of two numbers is: %f\n\n", result);
                break;

            case 2:
                strcpy(str, "You chose: Subtraction");
                printf("%s\n", str);

                printf("Enter first number: ");
                scanf("%f", &a);

                printf("Enter second number: ");
                scanf("%f", &b);

                result = sub(a, b);

                printf("Subtraction of two numbers is: %f\n\n", result);
                break;

            case 3:
                strcpy(str, "You chose: Multiplication");
                printf("%s\n", str);

                printf("Enter first number: ");
                scanf("%f", &a);

                printf("Enter second number: ");
                scanf("%f", &b);

                result = mul(a, b);

                printf("Multiplication of two numbers is: %f\n\n", result);
                break;

            case 4:
                strcpy(str, "You chose: Division");
                printf("%s\n", str);

                printf("Enter first number: ");
                scanf("%f", &a);

                printf("Enter second number: ");
                scanf("%f", &b);

                if (b != 0) {
                    result = div(a, b);
                    printf("Division of two numbers is: %f\n\n", result);
                } else {
                    printf("Error! Division by zero is not allowed.\n\n");
                }
                break;

            case 5:
                strcpy(str, "You chose: Square");
                printf("%s\n", str);

                printf("Enter the number: ");
                scanf("%f", &a);

                result = square(a);

                printf("Square of the number is: %f\n\n", result);
                break;

            case 6:
                strcpy(str, "You chose: Square Root");
                printf("%s\n", str);

                printf("Enter the number: ");
                scanf("%f", &a);

                if (a >= 0) {
                    result = square_root(a);
                    printf("Square Root of the number is: %f\n\n", result);
                } else {
                    printf("Error! Square root of a negative number is not allowed.\n\n");
                }
                break;

            case 7:
                printf("Exiting the program.\n");
                return 0;

            default:
                printf("Invalid choice! Please choose a valid option.\n\n");
                break;
        }
        printf("***************************************************************************");
    }

    return 0;
}

// Function for addition
float add(float a, float b)
{
    return a + b;
}

// Function for subtraction
float sub(float a, float b)
{
    return a - b;
}

// Function for multiplication
float mul(float a, float b)
{
    return a * b;
}

// Function for division
float div(float a, float b)
{
    return a / b;
}

// Function for square
float square(float a)
{
    return a * a;
}

// Function for square root
float square_root(float a)
{
    return sqrt(a);
}
