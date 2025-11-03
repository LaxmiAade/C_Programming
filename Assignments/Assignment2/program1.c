
// Write the Program to Accept the one Number from User and Print that Number of * on Screen

#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 1;
    while (iCnt <= iNo)
    {
        printf("*\t");
        iCnt++;
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