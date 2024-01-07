#include <stdio.h>

void printBinary(int number) {
    for (int i = sizeof(int) * 8 - 1; i >= 0; i--) {
        int bit = (number >> i) & 1;
        printf("%d", bit);
    }
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Binary representation: ");
    printBinary(number);

    printf("\n");

    return 0;
}
