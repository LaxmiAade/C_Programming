/* Write a program which accept number from user and if nubmer is less than 50
then print small, if it is greater than 50 and less than 100 print medium,if it is
greter than 100 then print large. */

// Input  : 34
// Output : small

// Input  : 75
// Output : Medium

// Input  : 120
// Output : Large

#include<stdio.h>

void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("Small");
    }
    else if (iNo > 50 && iNo < 100)
    {
        printf("Medium");
    }
    else
    {
        printf("Large");
    }
}

// Time Complexity : O(1)

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}