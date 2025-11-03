// Write a program which accept N Numbers and print first 5 multiples of N.

// Input  :     4
// Output :     4   8   12  16  20


#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    int iRet = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        iRet = iRet + iNo;

        printf("%d\t",iRet);
    }

}

// Time Complexity : O(5)  ->  O(1)

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);


    return 0;
}



