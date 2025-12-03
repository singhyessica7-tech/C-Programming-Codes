//program to make a simple calculator.
#include <stdio.h>
int main() {
    char op;
    int a,b, result;
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch(op) {
        case '+':
            result = a + b;
            printf("result: %.2f\n", result);
            break;

        case '-':
            result = a - b;
            printf("result: %.2f\n", result);
            break;

        case '*':    
            result = a * b;
            printf("result: %.2f\n", result);
            break;
        case '/':
            if(b != 0) 
            result = a / b;
            else {
                printf("Error! Division by zero.\n");
                return 0;
            }
            printf("result: %.2f\n", result);
            break;

            default:
                printf("Error! operator is not correct\n");
        }

                return 0;
    }