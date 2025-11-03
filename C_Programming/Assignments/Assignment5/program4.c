// Write a Program to Check it is Positive Number, Negative Number or Zero....

#include<stdio.h>

void CheckPosNegZero(int iNo)
{
    int iCnt = 0;

    if(iNo > iCnt)
    {
        printf("It is positive number \n");
    }
    else if (iNo < iCnt)
    {
        printf("It is Negative number \n");
    }
    else
    {
        printf("It is Zero ");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    CheckPosNegZero(iValue);

    return 0;
}