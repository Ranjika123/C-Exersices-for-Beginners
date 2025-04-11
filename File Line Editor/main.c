#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char Lines[100][256];
int LineNum;
int LineCount = 0;


int main () {

    FILE *EDIT = fopen("E:\\---PROJECTS---\\---C----\\Starter\\File Line Editor\\Tetxt.txt","r");
    if (EDIT == NULL)
    {
        /* code */
        perror("Can not Open the File Error Occured \n");
    } else{

        printf("File Open Successfully \n");
    }
    while (fgets(Lines[LineCount],256,EDIT) && LineCount < 100)
    {
        /* code */
        Lines[LineCount][strcspn(Lines[LineCount], "\n")] = 0;
        LineCount ++;
    }
    printf("Test While \n");
    fclose(EDIT);


    for (int i = 0; i <LineCount; i++)
    {
        /* code */
        printf("%d : %s \n",i+1,Lines[i]);
    }
    printf("Test For \n");

    printf("Enter the Line Number That wanted to edit (1 - %d \n",LineCount);
    scanf("%i",&LineNum);
    printf("Line Number Is %i \n",LineNum);
    LineNum --;

    if (LineNum >=0 && LineNum < LineCount)
    {
        /* code */
        printf("Enter The New Text");
        getchar();
        fgets(Lines[LineNum],256,stdin);
        Lines[LineNum][strcspn(Lines[LineNum], "\n")] = 0;
    }
    else {
        perror("Invalid Line Number \n");
        return 1;
    }
    
    printf("Test Close and Thing  \n");


    FILE *Input = fopen("E:\\---PROJECTS---\\---C----\\Starter\\File Line Editor\\Tetxt.txt","w");
    if (Input == NULL) {
        printf("Can't write to input.txt!\n");
        return 1;
    }


    for (int i = 0; i < LineCount; i++) {
        fputs(Lines[i], Input);
        fputs("\n", Input); // Add newline after each line
    }
    fclose(Input);

    printf("File updated!\n");
    return 0;

    
}