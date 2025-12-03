//shopkeeper gives 10% discount if the bill amount is more than 1000. write a program to calculate the final bill amount.
#include <stdio.h>
int main() {
    float bill, final;
    printf("Enter the bill amount: "); 
    scanf("%f", &bill);
    if(bill > 1000) {
        bill*= 0.9; 
    } else {
        final = bill;
        printf("no discount applied. ");
    }
    printf("Final bill amount: %.2f\n", bill);
    return 0;
}