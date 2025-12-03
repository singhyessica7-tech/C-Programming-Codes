//Sum of Digits

#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        sum += n % 10;   // extract last digit
        n /= 10;         // remove last digit
    }

    printf("Sum of digits = %d", sum);

    return 0;
}
