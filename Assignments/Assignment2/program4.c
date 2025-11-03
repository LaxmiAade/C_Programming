
// Write the Program to Accept the Two Numbers from User and Display First Number in second Number of times.....

//  Input  :  12 5
//  Output : 12 12 12 12 12

//  Input  :  -2 3
//  Output : -2 -2 -2

//  Input  :  21 -3
//  Output : 21 21 21

//  Input  : -2 0
//  Output : Nothing is printed because of 0 



#include <stdio.h>

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    // If frequency is negative, make it as positive
    if (iFrequency < 0)
    {
        iFrequency = -iFrequency;
    }

    for (iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d\t", iNo);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    int iFrequency = 0;

    printf("Enter the Number : ");
    scanf("%d", &iValue);

    printf("Enter the Frequency : ");
    scanf("%d", &iFrequency);


    Display(iValue,iFrequency);

    return 0;
}