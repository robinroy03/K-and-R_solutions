// program that prints its input one word per line

# include <stdio.h>
int main() {
    int word;
    while ((word = getchar()) != EOF) {
        // putchar(word);
        // putchar('\n');
        printf("%c\n",word);
    }
}