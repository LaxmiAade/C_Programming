
// Write the Program to Accept the one Number from User and Print that Number of * on Screen

#include <stdio.h>

void Display(int iNo)
{
    int iCnt = iNo;                 // Start from the entered number
    while (iCnt >= 1)               // Continue till 1
    {
        printf("*\t");
        iCnt--;
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the Number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}