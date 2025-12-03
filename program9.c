//write a program to find sum of first n natural numbers.
#include <stdio.h>
int main() {
    int n, i, num, sum=0;
    
    printf("Enter n:");
    scanf("%d", &n);

    for(i=1; i<=n; i++) {
        sum += 1;
    }

    
    printf("Sum of first n natural numbers is: %d\n", sum);
    return 0;
}
