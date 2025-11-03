// Write a program to find out factorial of given program...

// Input  :     5 
// Output :     120         (5 * 4 * 3 * 2 * 1)

// Input  :     -5 
// Output :     120         (5 * 4 * 3 * 2 * 1)

// Input  :     4 
// Output :     120         (4 * 3 * 2 * 1)

#include<stdio.h>

int DisplayFact(int iNo)
{
    int iCnt = 0;
    int iFact = 0;

    if(iNo < 0)             // updater 
    {
        iNo = -iNo;
    }

    for(iCnt = 1,iFact = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}

// Time Complexity : O(N)

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = DisplayFact(iValue);

    printf("Factorial of given number is : %d",iRet);    

    return 0;
}