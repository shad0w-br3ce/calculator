#include <stdio.h>


int main(int argc, char const *argv[])
{
    int choice;

    printf("Select an operation to perform the calculation in C calculator:\n");

    printf("%-25s %s\n", "1 Addition", "2 Subtraction");
    printf("%-25s %s\n", "3 Multiplication", "4 Division");
    printf("%-25s %s\n", "5 Square", "6 Square Root");
    printf("%-25s %s\n", "7 Exit", "");

    printf("Please, Make a choice ");
    scanf("%d", &choice);
    

    return 0;
}