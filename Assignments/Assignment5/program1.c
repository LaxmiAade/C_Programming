// Chech Even of Odd

#include<stdio.h>

void CheckEvenOdd(int iNo)
{
    if(iNo % 2 == 0)
    {
        printf("It is Even Number \n");
    }
    else
    {
        printf("It is Odd Number \n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number : ");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);

    return 0;
}