// Accept amount in US dollar and return its corresponding value in Indian Currency
// Consider 1$ as 70 rupees

// Input  : 10
// Output : 700

// Input  : 3
// Output : 270

// Input  : 1200
// Output : 84000

#include<stdio.h>

int DollarToINR(int iNo)
{
    int iRate = 70;

    return iNo * iRate;
}

// Time Complexity is O(1)
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the amount in dollars : ");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is : %d",iRet);

    return 0;
}
