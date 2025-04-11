#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int WordCount = 0;
char ReadChar;
int Word = 0; 
int LineCount = 0;

int main() {
    FILE *ReadFile = fopen("text.txt","r");

    if (ReadFile == NULL)
    {
        perror("Can't Open the File :");
    }else {
        printf("File OPen Successfully \n");
    }

    while ((ReadChar = fgetc(ReadFile)) != EOF) {
        if (isspace(ReadChar)) {
            Word = 0; // Outside a word
        } else if (!Word) {
            Word = 1; // Start of a new word
            WordCount++;
        }
    }
    
    printf("Word Count is %d ", WordCount);
    fclose(ReadFile);
    
}