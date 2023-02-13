// program to copy input to output, replacing each string 
// of one or more blanks by a single blank

#include <stdio.h>

int main() {
    int blank = 1;      // 1 -> not blank ; 0 -> blank
    int word;
    while ((word = getchar()) != EOF) {
        if (word == ' ' && blank == 1) {
            putchar(word);
            blank = 0;
        }
        else if (word == ' ' && blank == 0);
        else {
            blank = 1;
            putchar(word);
        }
    }
}