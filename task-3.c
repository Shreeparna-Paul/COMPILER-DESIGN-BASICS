#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 100

// List of keywords in C
char *keywords[] = {"auto","break","case","char","const","continue","default","do","double",
                    "else","enum","extern","float","for","goto","if","int","long","register",
                    "return","short","signed","sizeof","static","struct","switch","typedef",
                    "union","unsigned","void","volatile","while"};
#define KEYWORDS_SIZE (sizeof(keywords) / sizeof(char*))

// Check if a word is a keyword
int isKeyword(char *word) {
    for(int i = 0; i < KEYWORDS_SIZE; i++) {
        if (strcmp(word, keywords[i]) == 0) {
            return 1;
        }
    }
    return 0;
}

int main()
{
    FILE *file;
    char ch, buffer[MAX_SIZE];
    int i = 0;

    file = fopen("input.c", "r"); // The file should be in the same directory
    if (file == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }
  
    printf(" Lexical Analysis:\n");

    while ((ch = fgetc(file)) != EOF) {

        if (isalpha(ch)) { // If it's a letter, it's the start of an identifier or keyword
            i = 0;
            buffer[i++] = ch;
            while (isalnum(ch = fgetc(file)) || ch == '_') {
                buffer[i++] = ch;
            }
            buffer[i] = '\0';

            if (isKeyword(buffer))
                printf("%s - Keyword\n", buffer);
            else
                printf("%s - Identifier\n", buffer);
            fseek(file, -1, SEEK_CUR);
        }
        else if (strchr("+-*/=%", ch)) { // If it's an operator
            printf("%c - Operator\n", ch);
        }
    }
  
    fclose(file);
    return 0;
}