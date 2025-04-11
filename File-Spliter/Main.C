#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char filename[100];  
char line[256]; 

int lines_per_file;
int current_line = 0;    
int file_count = 1;

FILE *small_file = NULL; 
  


int main() {
    // Open the input file
    FILE *BigFile = fopen("E:\\---PROJECTS---\\---C----\\Starter\\File-Spliter\\big-text.txt", "r");
    if (BigFile == NULL) {
        perror("File Cannot be Opened");
        return 1;
    }
    printf("File Opened Successfully\n");

    // Get user input for lines per file
    
    printf("How many lines per file? ");
    scanf("%d", &lines_per_file);   

    // Read and split the file
    while (fgets(line, 256, BigFile) != NULL) {
        // Every 'lines_per_file' lines, open a new file
        if (current_line % lines_per_file == 0) {
            if (small_file != NULL) {
                fclose(small_file); // Close previous file
            }
            // Create filename like Part1.txt
            sprintf(filename, "E:\\---PROJECTS---\\---C----\\Starter\\File-Spliter\\Part%d.txt", file_count);
            small_file = fopen(filename, "w");
            if (small_file == NULL) {
                printf("Cannot create %s\n", filename);
                fclose(BigFile);
                return 1;
            }
            file_count++; // Increment for next file
        }

        // Write the line to the current file
        fputs(line, small_file);
        current_line++;
    }

    // Clean up
    if (small_file != NULL) {
        fclose(small_file);
    }
    fclose(BigFile);

    printf("%d files created\n", file_count - 1);
    return 0;
}