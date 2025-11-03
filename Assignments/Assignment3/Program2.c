
// Write a Program to Accept the Number from User and Print Even Factors of that Number on Screen.....

//  Input  :  24
//  Output :  1 2 4 6 8 12 

#include <stdio.h>

void DisplayFactor(int iNo)
{
    int i = 0;

    if(iNo <= 0) 
    {
        iNo = -iNo;
    }

    for (i = 1; i <= iNo / 2; i++)                          //  Loop till half of number (factors)
    {
        if ((iNo % i == 0) && (i % 2 == 0))                 //  Check: i is factor and even
        {
            printf("%d\t", i);
        }
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the Number : ");
    scanf("%d", &iValue);

    DisplayFactor(iValue);

    return 0;
}