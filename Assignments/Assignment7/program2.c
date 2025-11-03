// Write a Program Which Accept one Number from User and print till that Number....

// Input  :     8
// Output :     1   2   3   4   5   6   7   8

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)                        // Updater logic
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
}

// Time Complexity : O(N)

int main()
{
    int iValue = 0;

    printf("Enter the Number : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}

