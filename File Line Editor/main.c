#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int LineNum;
int main () {

    FILE *EDIT = fopen("Tetxt.txt","w");
    if (EDIT == NULL)
    {
        /* code */
        perror("Can not Open the File Error Occured \n");
    } else{

        printf("File Open Successfully \n");
    }

    printf("Enter the Line Number That wanted to edit - \n");
    scanf("%i",&LineNum);
    
    printf("Line Number Is %i \n",LineNum);

    


    fclose(EDIT);
  

    
}