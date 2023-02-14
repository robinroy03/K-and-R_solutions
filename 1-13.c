// program to print histogram of charactrs based on word length

# include <stdio.h>
int main() {
    
    int histogram[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int word, state;

    # define IN 1   // inside word
    # define OUT 0  // outside word

    state = OUT;
    int length = -1; // initial length declaration

    while ((word = getchar()) != EOF) {
        if ((state == IN && word == ' ') || (state == IN && word == '\n') || (word == '\n')) {
            state = OUT;
            if (length >= 10) {
                ++histogram[9];
            }
            else {
                ++histogram[length];
            }
            length = -1;
        }
        else if (state == OUT && word != ' ') {
            ++length;
            state = IN;
        }
        else if (state == IN && word != ' ') {
            ++length;
        }
    }
    for (int i = 0; i < 10; ++i) {
        printf("%d ", histogram[i]);
        }
    
    // now designing horizontal histograms
    putchar('\n');
    for (int i = 0; i <= 9; ++i) {
        if (i == 9) {
            printf("%d(or more) letter words : ", i+1);
        }
        else {
            printf("%d letter word : ",i+1);
        }
        for (int j = 0; j < histogram[i]; ++j) {
            putchar('=');
        }
        putchar('\n');
    }
}