#include <stdio.h>

int main() {
    const int arraySize = 10;
    int array[arraySize];

    // Input numbers from the user
    printf("Enter %d numbers:\n", arraySize);
    for (int i = 0; i < arraySize; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    int max = array[0];
    int min = array[0];

    for (int i = 1; i < arraySize; i++) {
        if (max < array[i]) {
            max = array[i];
        }

        if (min > array[i]) {
            min = array[i];
        }
    }

    printf("Maximum number: %d\n", max);
    printf("Minimum number: %d\n", min);

    return 0;
}

