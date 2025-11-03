// Write a program which accept N Numbers from user and print all Odd Numbers Upto N.

// Input  :     18
// Output :     1    3   5   7   9   11    13


#include<stdio.h>

void OddDisplay(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            printf("%d\t",iCnt);
        }   
    }
}

// Time Complexity : O(N)

int main()
{
    int iValue = 0;

    printf("Enter the first number : ");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}