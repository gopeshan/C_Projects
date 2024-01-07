#include <stdio.h>
#include <string.h>

int main() {
    char text[100];

    printf("Enter text: ");
    fgets(text, sizeof(text), stdin);

    int length = strlen(text);

    for (int i = length - 1; i >= 0; i--) {
        printf("%c", text[i]);
    }

    return 0;
}

