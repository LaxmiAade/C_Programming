// Write a program which accept Number from user and print that number of $ & * on screen

// Input    :    5
// Output   :    $   &   *  $   &    *  $   &    *  $   &    *  $   &    *

// Input    :    3
// Output   :    $   &   *  $   &    *  $   &    *  

// Input    :    -3
// Output   :    $   &   *  $   &    *  $   &    *  


#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$\t&\t*\t");
    }
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

