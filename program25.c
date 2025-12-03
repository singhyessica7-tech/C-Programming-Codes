//a program to count digits of a number.

#include <stdio.h>

int main() {
    int n, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0){
        n /= 10;  
        count++;
    }
    printf("total digits = %d", count);
    return 0;
}