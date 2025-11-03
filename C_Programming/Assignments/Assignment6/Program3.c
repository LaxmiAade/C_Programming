// Write a program which accept two numbers and check whether numbersare equal or not.

// Input    :  10 10
// Output   :  Equal

// Input    :  10 12
// Output   :  Not Equal

// Input    :  10 -12
// Output   :  Not Equal

#include<stdio.h>
#include<stdbool.h>

bool CheckEqual(int iNo1, int iNo2)
{
    bool bRet = false;

    if(iNo1 == iNo2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// Time Complexicity : - O(1)

int main()
{
    int iValue1 = 0 , iValue2 = 0;
    bool iResult = false;

    printf("Enter Two numbers : ");
    scanf("%d %d",&iValue1, &iValue2);

    iResult = CheckEqual(iValue1,iValue2);

    if(iResult == true)
    {
        printf("These are equal\n");
    }
    else
    {
        printf("These are not equal\n");
    }

    return 0;
}