#include<stdio.h>

//Global Variables
int Number1, Number2;

//Function Addition 
void Addition()
{
    //Inputs from Keywords
    printf("Enter 1st Num: ");
    scanf("%d", &Number1);
    printf("Enter 2st Num: ");
    scanf("%d", &Number2);
    //Output Print Statement
    printf("Addition of 2 Numbers as %d + %d = %d",Number1, Number2, Number1+Number2);
}

//Function Subraction
void Subraction()
{
    //Inputs from Keywords
    printf("Enter 1st Num: ");
    scanf("%d", &Number1);
    printf("Enter 2st Num: ");
    scanf("%d", &Number2);
    //Output Print Statement
    printf("Addition of 2 Numbers as %d - %d = %d",Number1, Number2, Number1-Number2);
}

//Function Multiplication
void Multiplication()
{
    //Inputs from Keywords
    printf("Enter 1st Num: ");
    scanf("%d", &Number1);
    printf("Enter 2st Num: ");
    scanf("%d", &Number2);
    //Output Print Statement
    printf("Addition of 2 Numbers as %d * %d = %d",Number1, Number2, Number1*Number2);
}

//Function Division
void Division()
{
    //Inputs from Keywords
    printf("Enter 1st Num: ");
    scanf("%d", &Number1);
    printf("Enter 2st Num: ");
    scanf("%d", &Number2);
    //Output Print Statement
    printf("Addition of 2 Numbers as %d / %d = %d",Number1, Number2, Number1/Number2);
}

int main()
{
    int Choice;
    //Options for Functions
    printf(" 1. Addition \n 2. Subraction \n 3. Multiplication \n 4. Division\n\n\n");
    printf("Enter Ur Choice: ");
    scanf("%d", &Choice);
    //Switch case for the Function Selection
    switch(Choice)
    {
        case 1: Addition();break;
        case 2: Subraction();break;
        case 3: Multiplication();break;
        case 4: Division();break;
        default: printf("Enter Valid Choice ! Try Again"); break;
    }
    printf("\nThank You for Using Code Dugunepalli Sunil Kumar");
    return 0;
}
