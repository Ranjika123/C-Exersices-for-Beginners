#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//struct
struct Students
{
    char Name[50];
    int ID;
    float Marks;
};

// Declaring Variables
int Choise;
int Number;
float Avarage;
int Count;
int Sum;
int BOOL = 0;

//Function Prototypes
void Readline ();
void Writefile();
void CalculateAvarage ();
void SearchRecord();

//Main Function
int main () {

   do {
    printf("**STUDENT RECORD MANAGER** \n");
    printf("Enter 1 to Create a Record \n");
    printf("Enter 2 to Read Records\n");
    printf("Enter 3 to Calculate Avarage\n");
    printf("Enter 4 to Serch a Record\n");
    printf("5 to EXIT the Programme\n");
    scanf("%d",&Choise);

    switch (Choise)
    {
    case 1:
        Writefile();
        break;

    case 2:
        Readline();
        break;

    case 3:
        CalculateAvarage();
        break;

    case 4:
        SearchRecord();
        break;

    case 5:
        printf("Exiting .....\n");
        break;
    
    default:
        printf("Invalid Command \n");
        break;
    }
   } 

   while (Choise != 5);
   {
    return 0;
   }  
    return 0;
}


//Write File  Function
void  Writefile() {
    FILE * Record = fopen("Grade.dat", "wb");
    if (Record == NULL)
    {
        /* code */
        printf("Invalid Operation \n");
        exit(0);
    }

    printf("How Many Students There \n");
    scanf("%d",&Number);

    struct Students incluede;
    for (int i = 0; i < Number; i++)
    {
        /* code */
        printf("Enter the Name of the kid : \n");
        scanf("%s",incluede.Name);
        printf("Enter the ID : \n");
        scanf("%i",&incluede.ID);
        printf("Enter the Grades of the kid : \n");
        scanf("%f",&incluede.Marks);

        fwrite(&incluede, sizeof(struct Students),1, Record);
    }
 
    fclose(Record);
    printf("Record Added Successfully...\n");    
}


//Reding Records
void Readline () {
    FILE * Record = fopen("Grade.dat", "rb");
    if (Record == NULL)
    {
        /* code */
        printf("Invalid Operation \n");
        exit(0);
    }

    struct Students incluede;
    printf("***Students Records*** \n");
    while (fread(&incluede, sizeof(struct Students),1, Record))
    {
        /* code */
        printf("Student Name : %s  Student Id : %i  Student Grade : %f \n",incluede.Name,incluede.ID,incluede.Marks);
    }

    printf("File Reading is Success full \n");
    fclose(Record);
}


//CalCulate Avarage Function
void CalculateAvarage (){
    FILE * Record = fopen("Grade.dat", "rb");
    if (Record == NULL)
    {
        /* code */
        printf("Invalid Operation \n");
        exit(0);
    }

    struct Students incluede;
    printf("***Students Records*** \n");
    while (fread(&incluede, sizeof(struct Students),1, Record))
    {
        /* code */
        Sum += incluede.Marks;
        Count++;
        
    }
    
    Avarage = Sum / Count;
    printf("Avarage Marks : %f \n",Avarage);

    printf("Calculating Avarage is Successfull \n");
    fclose(Record);
}


//Search By ID 
void SearchRecord(){
    FILE * Record = fopen("Grade.dat", "rb");
    if (Record == NULL)
    {
        /* code */
        printf("Invalid Operation \n");
        exit(0);
    }
    
    printf("Enter the Id You Want to Search :");
    scanf("%i",&Number);
    struct Students incluede;
    while (fread(&incluede, sizeof(struct Students),1, Record))
    {
        if (Number ==incluede.ID)
        {
            printf("Found the Record \n");
            printf("Student Name : %s  Student Id : %i  Student Grade : %f",incluede.Name,incluede.ID,incluede.Marks);
            BOOL = 1;
            break;
        }
        
      if (!BOOL)
      {
        printf("Record not Found ...\n");
      } 
    }

    fclose(Record); 
}