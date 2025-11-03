// Writ a program which accept one number from user and check whether that Number is greater than 100 or not.

// Input   :    101
// Output  :    Greater

// Input   :    39
// Output  :    Smaller

#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :       LargestAmongThreeNumbers
//  Description     :       It is used to perform that Number is greater than 100 or not 
//  Input           :       Int
//  Output          :       integer
//  Author          :       Laxmi Rahul Rathod
//  Date            :       20/10/2025
//  
/////////////////////////////////////////////////////////////////////////////


bool CheckGreaterSmaller(int iNo)
{
    int iVlaue = 0;

    iVlaue = 100;
    
    if(iNo >= iVlaue)
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
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    bRet = CheckGreaterSmaller(iValue);

    if(bRet == true)
    {
        printf("It is Greter Number \n");
    }
    else
    {
        printf("It is Smaller Number\n");
    }

    return 0;
}