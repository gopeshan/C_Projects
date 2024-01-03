#include <stdio.h>

int main() {
    int array[] = {42, 18, 56, 9, 27, 5, 74, 123, 890, 456};
    int size = sizeof(array) / sizeof(array[0]);

    int max = array[0];
    int min = array[0];

    for (int i = 1; i < size; i++) {
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
