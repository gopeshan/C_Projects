#include <stdio.h>
#include <string.h>

void reverseString(char *str) {
    int length = strlen(str);

    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
}

int main() {
    char text[100];

    printf("Enter text: ");
    fgets(text, sizeof(text), stdin);

    // Remove the newline character from the input
    text[strcspn(text, "\n")] = '\0';

    printf("Reversed Text: ");
    reverseString(text);

    return 0;
}
