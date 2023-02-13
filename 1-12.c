// program that prints its input one line per line

# include <stdio.h>
int main() {
    int word;
    while ((word = getchar()) != EOF) {
        // putchar(word);
        // putchar('\n');
        printf("%c\n",word);
    }
}