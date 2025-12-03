//to Find Largest Element in an Array

#include <stdio.h>

int main() {
    int n, a[50], max;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    max = a[0];

    for(int i = 1; i < n; i++) {
        if(a[i] > max)
            max = a[i];
    }

    printf("Maximum = %d", max);

    return 0;
}
