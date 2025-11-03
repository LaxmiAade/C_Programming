// Write a Program to Find Largest Among Three Numbers...

/////////////////////////////////////////////////////////////////////////////
//
// Required Header files
//
/////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :       LargestAmongThreeNumbers
//  Description     :       It is used to perform which is Largest Number Among Three 
//  Input           :       int, int, int
//  Output          :       integer
//  Author          :       Laxmi Rahul Rathod
//  Date            :       20/10/2025
//  
/////////////////////////////////////////////////////////////////////////////

int FindLargest(int iNo1, int iNo2, int iNo3)
{
    if((iNo1 > iNo2) && (iNo1 > iNo3))
    {
        return iNo1;
    }
    else if (iNo2 > iNo3)
    {
        return iNo2;
    }
    else
    {
        return iNo3;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0, Result;

    printf("Enter Three Numbers : ");
    scanf("%d %d %d",&iValue1, &iValue2, &iValue3);

    Result = FindLargest(iValue1,iValue2,iValue3);

    printf("Largest Number is : %d\n",Result);

    return 0;
}