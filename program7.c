//a program to find 4 digit perfect square whose 1st and last two digits are also perfect squares.
#include <stdio.h>
#include <math.h>
int isPerfectSquare(int n) {
    int root = (int)sqrt(n);
    return root * root == n;
}
int main() {
    int i;
    int num, firstTwo, lastTwo;
    while (i<100){
        firstTwo = num / 100;
        lastTwo = num % 100;
        if 
        (isPerfectSquare(firstTwo)&& isPerfectSquare(lastTwo)){
            printf("%d\n", num);
        }
        i++;
    }
    return 0;
}