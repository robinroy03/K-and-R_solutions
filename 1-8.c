// program to count blanks, tabs and newlines.

#include <stdio.h>

int main() {
    int blank, tabs, newline, line;
    blank = 0; tabs = 0; newline = 0;   
    while ((line = getchar()) != EOF) {
        if (line == ' ') ++blank;
        else if (line == '\t') ++tabs;
        else if (line == '\n') ++newline;
    }
    printf("%d\t%d\t%d\t", blank, tabs, newline);
}