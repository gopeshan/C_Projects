#include <stdio.h>
#include <stdlib.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    for (int i = sizeof(int) * 8 - 1; i >= 0; i--) {
        int bit = (number >> i) & 1;
        printf("%d", bit);
    }

    printf("\n");

    return 0;
}

