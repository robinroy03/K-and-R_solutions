// program that does basically string word split.

# include <stdio.h>
# include <string.h>

char words[100][100];
int word_count = 0;

void word(char sentence[]) {
    char temp[100];
    int index = 0;
    int word_index = 0;
    int len = strlen(sentence);

    for (int i = 0; i < len; i++) {
        if (sentence[i] != ' ') {
            temp[index] = sentence[i];
        }
        else {
            temp[index] = '\0';
            strcpy(words[word_index], temp);
            word_index++;
            index = 0;
            strcpy(temp, " ");
            word_count++;
            continue;
        }
        index++;
    }
    temp[index] = '\0';
    strcpy(words[word_index], temp);
}

int main() {
    char sentence[] = "The quick brown fox jumps over the lazy dog";
    word(sentence);
    for (int i = 0; i <= word_count; i++) {
        printf("%s ", words[i]);
    }
}