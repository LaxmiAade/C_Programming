
// Write the Program to Accept the one Number from user and print that Number of * on Screen


#include<stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)   
    {
        printf("*\t");
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    iValue = 5;

    printf("Enter the Number: ");
    scanf("%d", &iValue);

    Accept(iValue);

    return 0;
}