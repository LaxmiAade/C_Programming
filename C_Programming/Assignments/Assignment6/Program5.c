// Write a program which accept total marks & obtained marks from user and claculate percentage.

// Input    :    1000       745
// Output   :    74.5 %


#include<stdio.h>

float Percentage(float total, float obtained)
{
    float iNum1 = 0;
    float iNum2 = 0;

    if(total == 0)
    {
        printf("Invalid Input :");

        return 0.0;
    }

    float percent = (obtained / total) * 100;
    return percent;
}

// Time Complexity : O(1)

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int fRet = 0;

    printf("Enter Total marks : ");
    scanf("%d",&iValue1);

    printf("Enter Obtained marks : ");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);

    printf("Percentage is : %.2f %%",fRet);

    return 0;
}