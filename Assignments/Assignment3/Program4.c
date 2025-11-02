
// Write a Program which Accept one Character from User and Convert Case of that Character.....

//  Input  :   a    ---->    Output :  A
//  Input  :   D    ---->    Output :  d

#include<stdio.h>

void DisplayConvert(char cValue)
{
    if ((cValue >= 'A') && (cValue <= 'Z'))                                     // Uppercase letter
    {
        printf("%c\n", cValue + 32);                                            // Convert to lowercase
    }
    else if ((cValue >= 'a') && (cValue <= 'z'))                                //  Lowercase letter
    {
        printf("%c\n", cValue - 32);                                            // Convert to uppercase
    }
    else
    {
        printf("Invalid Input\n");                                              // For non-alphabet characters
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the Character : \n");
    scanf(" %c", &cValue);

    DisplayConvert(cValue);
    return 0;
}