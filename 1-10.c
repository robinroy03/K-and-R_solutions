// program to copy its input to its output, replacing each tab by \t,
// each backspace by \n, and each backslash by \\. This makes tabs and 
// backspaces visible in an unambiguous way.

#include <stdio.h>

int main() {
    int word;
    while ((word = getchar()) != EOF) {
        if (word == '\t') {
            printf("\\t");
        }
        else if (word == '\b') {
            printf("\\b");
        }
        else if (word == '\\') {
            printf("\\\\");
        }
        else {
            putchar(word);
        }
    }
}