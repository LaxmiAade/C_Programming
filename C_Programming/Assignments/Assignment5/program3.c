// Write a Program to Check Leap Year

#include<stdio.h>

void CheckLeapYear(int iNo)
{
    if((iNo % 4 == 0 && iNo % 100 != 0) || (iNo % 400 == 0))
    {
        printf("%d is a Leap Year\n",iNo);
    }
    else
    {
        printf("%d is NOT a Leap Year\n",iNo);
    }
}

int main()
{
    int yr;
    printf("Enter Year : ");
    scanf("%d",&yr);
    CheckLeapYear(yr);
    
    return 0;
}