#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <mem.h>

char Charactor = 13;
char EncryptedChar;
int Choose;
char ReadChar;


void Encryption();
void Decryption();

int main () {

    do
    {
        printf("Choos a Option. \n");
        printf("1.I want to Encrypt \n");
        printf("2.I want to Decrypt \n");
        printf("3.Exit \n");
        scanf("%d",&Choose);

        switch (Choose)
        {
        case 1:
            Encryption();
            break;
        
        case 2:
            Decryption();
            break;
        case 3:
            printf("Exiting...");
            break;
        default:
            printf("Invalid Command \n");
            break;
        }
    } while (Choose !=  3);
    {
        exit(1);
    } 
    return 0;
}


void Encryption () {
    FILE * Read = fopen("Tetxt.txt","r");
    FILE * Write = fopen("Write.Txt","w");

    if ( Read == NULL || Write == NULL)
    {
        /* code */
        perror("UnVailable to Open Problem Occure :");
        return;
    }
    while ((ReadChar = fgetc(Read)) != EOF) {
        // Encrypt the character by modifying its ASCII value
        char EncryptedChar = ReadChar + Charactor; 
        fputc(EncryptedChar, Write); // Write encrypted character
    }

    fclose(Write);
    fclose(Read);

    printf("File Encrypted Success Fully \n");
}

void Decryption () {
    FILE * Encrypted = fopen("Write.Txt","r");
    FILE * Decrypted = fopen("Decrypt.txt","w");

    if (Encrypted == NULL || Decrypted == NULL)
    {
        /* code */
        perror("UnVailable to to Open Problem Occured :");
        return;
    }

    while ((ReadChar = fgetc(Encrypted)) != EOF)
    {
        /* code */
        char DecryptedChar = ReadChar - Charactor;
        fputc(DecryptedChar,Decrypted);

    }

    fclose(Encrypted);
    fclose(Decrypted);

    printf("Decriion is succesfull \n");
}
