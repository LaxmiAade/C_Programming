// Write a program which accept number from user and return difference between summation of all its factors and non factros

// Input  :  12
// Output :  -22 (28-50)

// Input  :  10
// Output :  -29 (18-37)

#include<stdio.h>

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSumFact = 0;
    int iSum = 0;
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSumFact = iSumFact + iCnt;
        }
        else
        {   
            iSum = iSum + iCnt;
        }
    }
    return iSumFact - iSum;    
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter the number :\n");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);

    printf("Difference is : %d", iRet);

    return 0;
}