//to print all ASCII codes from 0 to 130
#include <stdio.h>

int main() {
    int i;

    for (i = 0; i <= 130; i++) {
        printf("%d = %c\n", i, i);
    }

    return 0;
}
